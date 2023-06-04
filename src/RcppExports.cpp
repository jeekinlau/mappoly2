// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// mappoly_chisq_test
List mappoly_chisq_test(List input_data);
RcppExport SEXP _mappoly2_mappoly_chisq_test(SEXP input_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input_data(input_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(mappoly_chisq_test(input_data));
    return rcpp_result_gen;
END_RCPP
}
// filter_non_conforming_classes
List filter_non_conforming_classes(List input_data);
RcppExport SEXP _mappoly2_filter_non_conforming_classes(SEXP input_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input_data(input_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_non_conforming_classes(input_data));
    return rcpp_result_gen;
END_RCPP
}
// find_valid_permutations
NumericMatrix find_valid_permutations(NumericMatrix H, NumericVector d, int x);
RcppExport SEXP _mappoly2_find_valid_permutations(SEXP HSEXP, SEXP dSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type H(HSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(find_valid_permutations(H, d, x));
    return rcpp_result_gen;
END_RCPP
}
// filter_matrices
List filter_matrices(List mat_list);
RcppExport SEXP _mappoly2_filter_matrices(SEXP mat_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mat_list(mat_listSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_matrices(mat_list));
    return rcpp_result_gen;
END_RCPP
}
// est_hmm_map_biallelic
List est_hmm_map_biallelic(List PH, IntegerMatrix G, NumericMatrix pedigree, NumericVector rf, bool verbose, bool detailed_verbose, double tol, bool ret_H0);
RcppExport SEXP _mappoly2_est_hmm_map_biallelic(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP rfSEXP, SEXP verboseSEXP, SEXP detailed_verboseSEXP, SEXP tolSEXP, SEXP ret_H0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type detailed_verbose(detailed_verboseSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_H0(ret_H0SEXP);
    rcpp_result_gen = Rcpp::wrap(est_hmm_map_biallelic(PH, G, pedigree, rf, verbose, detailed_verbose, tol, ret_H0));
    return rcpp_result_gen;
END_RCPP
}
// est_hmm_map_biallelic_single
List est_hmm_map_biallelic_single(NumericMatrix PH, IntegerMatrix G, NumericVector rf, bool verbose, bool detailed_verbose, double tol, bool ret_H0);
RcppExport SEXP _mappoly2_est_hmm_map_biallelic_single(SEXP PHSEXP, SEXP GSEXP, SEXP rfSEXP, SEXP verboseSEXP, SEXP detailed_verboseSEXP, SEXP tolSEXP, SEXP ret_H0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type detailed_verbose(detailed_verboseSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_H0(ret_H0SEXP);
    rcpp_result_gen = Rcpp::wrap(est_hmm_map_biallelic_single(PH, G, rf, verbose, detailed_verbose, tol, ret_H0));
    return rcpp_result_gen;
END_RCPP
}
// twopt_phasing_cpp
List twopt_phasing_cpp(CharacterVector mrk_id, int ploidy, IntegerVector dose_vec, NumericMatrix S, int max_conf_number, bool verbose);
RcppExport SEXP _mappoly2_twopt_phasing_cpp(SEXP mrk_idSEXP, SEXP ploidySEXP, SEXP dose_vecSEXP, SEXP SSEXP, SEXP max_conf_numberSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type mrk_id(mrk_idSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dose_vec(dose_vecSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type max_conf_number(max_conf_numberSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(twopt_phasing_cpp(mrk_id, ploidy, dose_vec, S, max_conf_number, verbose));
    return rcpp_result_gen;
END_RCPP
}
// segreg_poly
NumericVector segreg_poly(int ploidy_p1, int ploidy_p2, int d_p1, int d_p2);
RcppExport SEXP _mappoly2_segreg_poly(SEXP ploidy_p1SEXP, SEXP ploidy_p2SEXP, SEXP d_p1SEXP, SEXP d_p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ploidy_p1(ploidy_p1SEXP);
    Rcpp::traits::input_parameter< int >::type ploidy_p2(ploidy_p2SEXP);
    Rcpp::traits::input_parameter< int >::type d_p1(d_p1SEXP);
    Rcpp::traits::input_parameter< int >::type d_p2(d_p2SEXP);
    rcpp_result_gen = Rcpp::wrap(segreg_poly(ploidy_p1, ploidy_p2, d_p1, d_p2));
    return rcpp_result_gen;
END_RCPP
}
// est_hmm_map_biallelic2
List est_hmm_map_biallelic2(List PH, IntegerMatrix G, NumericMatrix pedigree, NumericVector rf, bool verbose, bool detailed_verbose, double tol, bool ret_H0);
RcppExport SEXP _mappoly2_est_hmm_map_biallelic2(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP rfSEXP, SEXP verboseSEXP, SEXP detailed_verboseSEXP, SEXP tolSEXP, SEXP ret_H0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type detailed_verbose(detailed_verboseSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_H0(ret_H0SEXP);
    rcpp_result_gen = Rcpp::wrap(est_hmm_map_biallelic2(PH, G, pedigree, rf, verbose, detailed_verbose, tol, ret_H0));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP pairwise_rf_estimation(void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"_mappoly2_mappoly_chisq_test", (DL_FUNC) &_mappoly2_mappoly_chisq_test, 1},
    {"_mappoly2_filter_non_conforming_classes", (DL_FUNC) &_mappoly2_filter_non_conforming_classes, 1},
    {"_mappoly2_find_valid_permutations", (DL_FUNC) &_mappoly2_find_valid_permutations, 3},
    {"_mappoly2_filter_matrices", (DL_FUNC) &_mappoly2_filter_matrices, 1},
    {"_mappoly2_est_hmm_map_biallelic", (DL_FUNC) &_mappoly2_est_hmm_map_biallelic, 8},
    {"_mappoly2_est_hmm_map_biallelic_single", (DL_FUNC) &_mappoly2_est_hmm_map_biallelic_single, 7},
    {"_mappoly2_twopt_phasing_cpp", (DL_FUNC) &_mappoly2_twopt_phasing_cpp, 6},
    {"_mappoly2_segreg_poly", (DL_FUNC) &_mappoly2_segreg_poly, 4},
    {"_mappoly2_est_hmm_map_biallelic2", (DL_FUNC) &_mappoly2_est_hmm_map_biallelic2, 8},
    {"pairwise_rf_estimation", (DL_FUNC) &pairwise_rf_estimation, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_mappoly2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
