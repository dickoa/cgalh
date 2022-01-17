// Copyright (c) 1997-2021
// Utrecht University (The Netherlands),
// ETH Zurich (Switzerland),
// INRIA Sophia-Antipolis (France),
// Max-Planck-Institute Saarbruecken (Germany),
// and Tel-Aviv University (Israel).
// GeometryFactory (France)
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org)
//
// $URL: https://github.com/CGAL/cgal/blob/v5.4-beta1/Intersections_3/include/CGAL/Intersections_3/Bbox_3_Bbox_3.h $
// $Id: Bbox_3_Bbox_3.h c2d1adf 2021-06-23T17:34:48+02:00 Mael Rouxel-Labbé
// SPDX-License-Identifier: LGPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Sebastien Loriot
//

#ifndef CGAL_INTERSECTIONS_3_BBOX_3_BBOX_3_H
#define CGAL_INTERSECTIONS_3_BBOX_3_BBOX_3_H

#include <CGAL/Intersection_traits_3.h>

#include <CGAL/Bbox_3.h>

#include <boost/optional.hpp>
#include <boost/variant.hpp>

#include <utility>

namespace CGAL {

bool
inline
do_intersect(const CGAL::Bbox_3& c,
             const CGAL::Bbox_3& bbox)
{
  return CGAL::do_overlap(c, bbox);
}

typename boost::optional< typename boost::variant< Bbox_3> >
inline
intersection(const CGAL::Bbox_3& a,
             const CGAL::Bbox_3& b)
{
  typedef typename boost::variant<Bbox_3> variant_type;
  typedef typename boost::optional<variant_type> result_type;

  if(!do_intersect(a,b))
    return result_type();

  double xmin = (std::max)(a.xmin(), b.xmin());
  double xmax = (std::min)(a.xmax(), b.xmax());
  double ymin = (std::max)(a.ymin(), b.ymin());
  double ymax = (std::min)(a.ymax(), b.ymax());
  double zmin = (std::max)(a.zmin(), b.zmin());
  double zmax = (std::min)(a.zmax(), b.zmax());

  return result_type(std::forward<Bbox_3>(Bbox_3(xmin, ymin, zmin, xmax, ymax, zmax)));
}

namespace Intersections {
namespace internal {

template <class K>
bool
inline
do_intersect(const CGAL::Bbox_3& c,
             const CGAL::Bbox_3& bbox,
             const K&)
{
  return CGAL::do_intersect(c, bbox);
}

template <class K>
inline
typename Intersection_traits<K, Bbox_3, Bbox_3>::result_type
intersection(const Bbox_3& a,
             const Bbox_3& b,
             const K&)
{
  return CGAL::intersection(a, b);
}

} // namespace internal
} // namespace Intersections
} // namespace CGAL

#endif // CGAL_INTERSECTIONS_3_BBOX_3_BBOX_3_H
