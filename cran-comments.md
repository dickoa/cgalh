## Test environments

* ubuntu 20.04 (on gitlab-ci), R 4.2.2
* win-builder (devel and release)
* macOS 10.13.6 High Sierra

## R CMD check results

❯ checking for portable file names ... NOTE
  Found the following non-portable file paths:
    cgalh/inst/include/CGAL/Filtered_kernel/internal/Static_filters/Power_side_of_oriented_power_sphere_3.h
    cgalh/inst/include/CGAL/Hyperbolic_triangulation_2/internal/Hyperbolic_Delaunay_triangulation_traits_2_functions.h
    cgalh/inst/include/CGAL/Mesh_3/internal/Boundary_of_subdomain_of_complex_3_in_triangulation_3_to_off.h
    cgalh/inst/include/CGAL/Periodic_2_triangulation_2/internal/Periodic_2_Delaunay_triangulation_filtered_traits_2.h
    cgalh/inst/include/CGAL/Periodic_2_triangulation_2/internal/Periodic_2_Delaunay_triangulation_statically_filtered_traits_2.h
    cgalh/inst/include/CGAL/Periodic_2_triangulation_2/internal/Periodic_2_triangulation_filtered_traits_2.h
    cgalh/inst/include/CGAL/Periodic_2_triangulation_2/internal/Periodic_2_triangulation_statically_filtered_traits_2.h
    cgalh/inst/include/CGAL/Periodic_2_triangulation_2/internal/Static_filters/Periodic_2_orientation_2.h
    cgalh/inst/include/CGAL/Periodic_2_triangulation_2/internal/Static_filters/Periodic_2_side_of_oriented_circle_2.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Functor_with_offset_weighted_points_adaptor_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_Delaunay_triangulation_filtered_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_Delaunay_triangulation_remove_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_Delaunay_triangulation_statically_filtered_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_regular_triangulation_dummy_288.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_regular_triangulation_filtered_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_regular_triangulation_remove_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_regular_triangulation_statically_filtered_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_triangulation_filtered_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Periodic_3_triangulation_statically_filtered_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Robust_periodic_weighted_circumcenter_traits_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Static_filters/Periodic_3_orientation_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Static_filters/Periodic_3_power_side_of_oriented_power_sphere_3.h
    cgalh/inst/include/CGAL/Periodic_3_triangulation_3/internal/Static_filters/Periodic_3_side_of_oriented_sphere_3.h
    cgalh/inst/include/CGAL/Periodic_4_hyperbolic_triangulation_2/internal/Dehn_hyperbolic_octagon_translation_word.h
    cgalh/inst/include/CGAL/Periodic_4_hyperbolic_triangulation_2/internal/Hyperbolic_octagon_translation_matrix.h
    cgalh/inst/include/CGAL/Periodic_4_hyperbolic_triangulation_2/internal/Hyperbolic_octagon_translation_word.h
    cgalh/inst/include/CGAL/Periodic_4_hyperbolic_triangulation_2/internal/Periodic_4_hyperbolic_triangulation_dummy_14.h

  Tarballs are only required to store paths of up to 100 bytes and cannot
  store those of more than 256 bytes, with restrictions including to 100
  bytes for the final component.
  See section ‘Package structure’ in the ‘Writing R Extensions’ manual.

❯ checking installed package size ... NOTE
    installed size is 41.1Mb
    sub-directories of 1Mb or more:
      include  40.9Mb

0 errors ✔ | 0 warnings ✔ | 2 notes ✖
