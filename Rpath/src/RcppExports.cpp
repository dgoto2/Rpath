// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// deriv_test
List deriv_test(List par, List force, int y, int m, int d);
RcppExport SEXP Rpath_deriv_test(SEXP parSEXP, SEXP forceSEXP, SEXP ySEXP, SEXP mSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type par(parSEXP);
    Rcpp::traits::input_parameter< List >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    __result = Rcpp::wrap(deriv_test(par, force, y, m, d));
    return __result;
END_RCPP
}
// deriv_master
int deriv_master(List mod, int y, int m, int d);
RcppExport SEXP Rpath_deriv_master(SEXP modSEXP, SEXP ySEXP, SEXP mSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    __result = Rcpp::wrap(deriv_master(mod, y, m, d));
    return __result;
END_RCPP
}
// SplitSetPred
int SplitSetPred(List mod);
RcppExport SEXP Rpath_SplitSetPred(SEXP modSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    __result = Rcpp::wrap(SplitSetPred(mod));
    return __result;
END_RCPP
}
// update_stanzas
int update_stanzas(List mod, int yr, int mon);
RcppExport SEXP Rpath_update_stanzas(SEXP modSEXP, SEXP yrSEXP, SEXP monSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    Rcpp::traits::input_parameter< int >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< int >::type mon(monSEXP);
    __result = Rcpp::wrap(update_stanzas(mod, yr, mon));
    return __result;
END_RCPP
}
// Adams_Basforth
int Adams_Basforth(List mod, int StartYear, int EndYear);
RcppExport SEXP Rpath_Adams_Basforth(SEXP modSEXP, SEXP StartYearSEXP, SEXP EndYearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    Rcpp::traits::input_parameter< int >::type StartYear(StartYearSEXP);
    Rcpp::traits::input_parameter< int >::type EndYear(EndYearSEXP);
    __result = Rcpp::wrap(Adams_Basforth(mod, StartYear, EndYear));
    return __result;
END_RCPP
}
// vpow
NumericVector vpow(const NumericVector base, const NumericVector exp);
RcppExport SEXP Rpath_vpow(SEXP baseSEXP, SEXP expSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type base(baseSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type exp(expSEXP);
    __result = Rcpp::wrap(vpow(base, exp));
    return __result;
END_RCPP
}
