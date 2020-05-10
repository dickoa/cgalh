[![GitLab CI Build
Status](https://gitlab.com/dickoa/cgalheaders/badges/master/pipeline.svg)](https://gitlab.com/dickoa/cgalheaders/pipelines)
[![](http://www.r-pkg.org/badges/version/cgalheaders)](http://www.r-pkg.org/pkg/cgalheaders)


# cgalheaders

R interface to the C++ header-only [CGAL](https://www.cgal.org) library.

This package is currently shipping the [latest release CGAL](https://github.com/CGAL/cgal/releases/latest).

## Install


Install the development version with the `remotes` R package

```
remotes::install_gitlab("dickoa/cgalheaders")
```

## Using cgalheaders


To use `cgalheaders` in your own package, add a dependency to `cgalheaders` to your cpp files **before** a call to `#include <Rcpp.h>`

```
// [[Rcpp::depends(cgalheaders)]]

#include <Rcpp.h>
```

## License

This package is provided under the double [GPL-3](https://www.gnu.org/licenses/gpl-3.0.en.html) | [LGPL-3](https://www.gnu.org/licenses/lgpl-3.0.en.html) license like CGAL.
