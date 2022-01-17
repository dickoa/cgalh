[![GitLab CI Build
Status](https://gitlab.com/dickoa/cgalh/badges/master/pipeline.svg)](https://gitlab.com/dickoa/cgalh/pipelines)


# cgalh

This package provides an R interface to the header-only C++ [CGAL](https://www.cgal.org) library

This package is using the latest stable release of  [CGAL](https://www.cgal.org).

## Install

Install the development version with the `remotes` R package

```r
remotes::install_gitlab("dickoa/cgalh")
```

## Using cgalh

In order to use `cgalh` in your own R package, you need to add it to the `LinkingTo` field in the DESCRIPTION field of your R package. More information here:

https://cran.r-project.org/doc/manuals/r-release/R-exts.html#Linking-to-native-routines-in-other-packages

You will have more information on how to use CGAL in your own code through its [official documentation](https://doc.cgal.org/latest/Manual/installation.html).

If you are using `Rcpp` don't forget to add a dependency to `cgalh` to your cpp files **before** a call to `#include <Rcpp.h>`

```r
// [[Rcpp::depends(cgalh)]]

#include <Rcpp.h>
```


## License

This package is provided under the [GPL-3](https://www.gnu.org/licenses/gpl-3.0.en.html).

The CGAL library uses the dual license [GPL-3](https://www.gnu.org/licenses/gpl-3.0.en.html). | [LGPL-3](https://www.gnu.org/licenses/lgpl-3.0.en.html). More information can be found at [https://www.cgal.org/license.html](https://www.cgal.org/license.html).
