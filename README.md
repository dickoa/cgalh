[![GitLab CI Build
Status](https://gitlab.com/dickoa/cgalh/badges/master/pipeline.svg)](https://gitlab.com/dickoa/cgalh/pipelines)
[![](http://www.r-pkg.org/badges/version/cgalh)](http://www.r-pkg.org/pkg/cgalh)


# cgalheaders

R interface to the C++ header-only [CGAL](https://www.cgal.org) library.

This package is currently shipping the [latest release CGAL](https://github.com/CGAL/cgal/releases/latest).

## Install


Install the development version with the `remotes` R package

```
remotes::install_gitlab("dickoa/cgalh")
```

## Using cgalh


To use `cgalh` in your own package, add a dependency to `cgalh` to your cpp files **before** a call to `#include <Rcpp.h>`

```
// [[Rcpp::depends(cgalh)]]

#include <Rcpp.h>
```

## Missing headers

Because of portability issues not all headers are included in this package, the following components are currently missing:

- `CGAL/Algebraic_kernel_for_circles`
- `CGAL/Algebraic_kernel_for_spheres`
- `Polygon_mesh_processing/internal`
- `CGAL/Shape_detection/`

## License

This package is provided under the double [GPL-3](https://www.gnu.org/licenses/gpl-3.0.en.html) | [LGPL-3](https://www.gnu.org/licenses/lgpl-3.0.en.html) license like CGAL.

More information on the CGAL license can be found at https://www.cgal.org/license.html.
