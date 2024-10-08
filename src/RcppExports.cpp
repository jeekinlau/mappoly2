// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// calc_haploprob_biallelic
arma::sp_mat calc_haploprob_biallelic(List PH, IntegerMatrix G, NumericMatrix pedigree, NumericVector rf, double err);
RcppExport SEXP _mappoly2_calc_haploprob_biallelic(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP rfSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< double >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_haploprob_biallelic(PH, G, pedigree, rf, err));
    return rcpp_result_gen;
END_RCPP
}
// calc_haploprob_biallelic_single
arma::sp_mat calc_haploprob_biallelic_single(NumericMatrix PH, IntegerMatrix G, NumericVector rf, double err);
RcppExport SEXP _mappoly2_calc_haploprob_biallelic_single(SEXP PHSEXP, SEXP GSEXP, SEXP rfSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< double >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_haploprob_biallelic_single(PH, G, rf, err));
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
// vs_inserted_mrk
List vs_inserted_mrk(List PH, IntegerVector G, NumericMatrix pedigree, NumericMatrix M, IntegerVector idx);
RcppExport SEXP _mappoly2_vs_inserted_mrk(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP MSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(vs_inserted_mrk(PH, G, pedigree, M, idx));
    return rcpp_result_gen;
END_RCPP
}
// vs_biallelic_error
List vs_biallelic_error(List PH, IntegerMatrix G, NumericMatrix pedigree, double err, bool logatithm);
RcppExport SEXP _mappoly2_vs_biallelic_error(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP errSEXP, SEXP logatithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< double >::type err(errSEXP);
    Rcpp::traits::input_parameter< bool >::type logatithm(logatithmSEXP);
    rcpp_result_gen = Rcpp::wrap(vs_biallelic_error(PH, G, pedigree, err, logatithm));
    return rcpp_result_gen;
END_RCPP
}
// est_hmm_map_biallelic_insert_marker
List est_hmm_map_biallelic_insert_marker(List PH, IntegerVector G, NumericMatrix pedigree, NumericMatrix M, NumericVector rf, IntegerVector idx, bool verbose, bool detailed_verbose, double tol, bool ret_H0);
RcppExport SEXP _mappoly2_est_hmm_map_biallelic_insert_marker(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP MSEXP, SEXP rfSEXP, SEXP idxSEXP, SEXP verboseSEXP, SEXP detailed_verboseSEXP, SEXP tolSEXP, SEXP ret_H0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type detailed_verbose(detailed_verboseSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_H0(ret_H0SEXP);
    rcpp_result_gen = Rcpp::wrap(est_hmm_map_biallelic_insert_marker(PH, G, pedigree, M, rf, idx, verbose, detailed_verbose, tol, ret_H0));
    return rcpp_result_gen;
END_RCPP
}
// est_hmm_map_biallelic
List est_hmm_map_biallelic(List PH, IntegerMatrix G, NumericMatrix pedigree, NumericVector rf, double err, bool verbose, bool detailed_verbose, double tol, bool ret_H0);
RcppExport SEXP _mappoly2_est_hmm_map_biallelic(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP rfSEXP, SEXP errSEXP, SEXP verboseSEXP, SEXP detailed_verboseSEXP, SEXP tolSEXP, SEXP ret_H0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< double >::type err(errSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type detailed_verbose(detailed_verboseSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_H0(ret_H0SEXP);
    rcpp_result_gen = Rcpp::wrap(est_hmm_map_biallelic(PH, G, pedigree, rf, err, verbose, detailed_verbose, tol, ret_H0));
    return rcpp_result_gen;
END_RCPP
}
// est_hmm_map_biallelic_single
List est_hmm_map_biallelic_single(NumericMatrix PH, IntegerMatrix G, NumericVector rf, double err, bool verbose, bool detailed_verbose, double tol, bool ret_H0);
RcppExport SEXP _mappoly2_est_hmm_map_biallelic_single(SEXP PHSEXP, SEXP GSEXP, SEXP rfSEXP, SEXP errSEXP, SEXP verboseSEXP, SEXP detailed_verboseSEXP, SEXP tolSEXP, SEXP ret_H0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< double >::type err(errSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type detailed_verbose(detailed_verboseSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_H0(ret_H0SEXP);
    rcpp_result_gen = Rcpp::wrap(est_hmm_map_biallelic_single(PH, G, rf, err, verbose, detailed_verbose, tol, ret_H0));
    return rcpp_result_gen;
END_RCPP
}
// pairwise_rf_estimation_disc_rcpp
RcppExport SEXP pairwise_rf_estimation_disc_rcpp(SEXP mrk_pairs_R, SEXP ploidy_p1_R, SEXP ploidy_p2_R, SEXP geno_R, SEXP dose_p1_R, SEXP dose_p2_R, SEXP count_vector_R, SEXP count_matrix_phases_R, SEXP count_matrix_rownames_R, SEXP count_matrix_number_R, SEXP count_matrix_pos_R, SEXP count_matrix_length_R, SEXP tol_R);
RcppExport SEXP _mappoly2_pairwise_rf_estimation_disc_rcpp(SEXP mrk_pairs_RSEXP, SEXP ploidy_p1_RSEXP, SEXP ploidy_p2_RSEXP, SEXP geno_RSEXP, SEXP dose_p1_RSEXP, SEXP dose_p2_RSEXP, SEXP count_vector_RSEXP, SEXP count_matrix_phases_RSEXP, SEXP count_matrix_rownames_RSEXP, SEXP count_matrix_number_RSEXP, SEXP count_matrix_pos_RSEXP, SEXP count_matrix_length_RSEXP, SEXP tol_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mrk_pairs_R(mrk_pairs_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ploidy_p1_R(ploidy_p1_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ploidy_p2_R(ploidy_p2_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type geno_R(geno_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dose_p1_R(dose_p1_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dose_p2_R(dose_p2_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type count_vector_R(count_vector_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type count_matrix_phases_R(count_matrix_phases_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type count_matrix_rownames_R(count_matrix_rownames_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type count_matrix_number_R(count_matrix_number_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type count_matrix_pos_R(count_matrix_pos_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type count_matrix_length_R(count_matrix_length_RSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tol_R(tol_RSEXP);
    rcpp_result_gen = Rcpp::wrap(pairwise_rf_estimation_disc_rcpp(mrk_pairs_R, ploidy_p1_R, ploidy_p2_R, geno_R, dose_p1_R, dose_p2_R, count_vector_R, count_matrix_phases_R, count_matrix_rownames_R, count_matrix_number_R, count_matrix_pos_R, count_matrix_length_R, tol_R));
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
// phasing_one
List phasing_one(CharacterVector mrk_id, IntegerVector dose_vec, NumericMatrix S, NumericMatrix InitPh, bool verbose);
RcppExport SEXP _mappoly2_phasing_one(SEXP mrk_idSEXP, SEXP dose_vecSEXP, SEXP SSEXP, SEXP InitPhSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type mrk_id(mrk_idSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dose_vec(dose_vecSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type S(SSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type InitPh(InitPhSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(phasing_one(mrk_id, dose_vec, S, InitPh, verbose));
    return rcpp_result_gen;
END_RCPP
}
// vcf_get_probabilities
Rcpp::List vcf_get_probabilities(Rcpp::StringMatrix& mat, int pl_pos);
RcppExport SEXP _mappoly2_vcf_get_probabilities(SEXP matSEXP, SEXP pl_posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type pl_pos(pl_posSEXP);
    rcpp_result_gen = Rcpp::wrap(vcf_get_probabilities(mat, pl_pos));
    return rcpp_result_gen;
END_RCPP
}
// vcf_transform_dosage
Rcpp::NumericMatrix vcf_transform_dosage(Rcpp::StringMatrix& mat, int gt_pos);
RcppExport SEXP _mappoly2_vcf_transform_dosage(SEXP matSEXP, SEXP gt_posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type gt_pos(gt_posSEXP);
    rcpp_result_gen = Rcpp::wrap(vcf_transform_dosage(mat, gt_pos));
    return rcpp_result_gen;
END_RCPP
}
// vcf_get_ploidy
Rcpp::NumericMatrix vcf_get_ploidy(Rcpp::StringMatrix& mat, int gt_pos);
RcppExport SEXP _mappoly2_vcf_get_ploidy(SEXP matSEXP, SEXP gt_posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type gt_pos(gt_posSEXP);
    rcpp_result_gen = Rcpp::wrap(vcf_get_ploidy(mat, gt_pos));
    return rcpp_result_gen;
END_RCPP
}
// vcf_get_depth
Rcpp::NumericMatrix vcf_get_depth(Rcpp::StringMatrix& mat, int dp_pos);
RcppExport SEXP _mappoly2_vcf_get_depth(SEXP matSEXP, SEXP dp_posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type dp_pos(dp_posSEXP);
    rcpp_result_gen = Rcpp::wrap(vcf_get_depth(mat, dp_pos));
    return rcpp_result_gen;
END_RCPP
}
// est_hmm_map_biallelic_log_implementation
List est_hmm_map_biallelic_log_implementation(List PH, IntegerMatrix G, NumericMatrix pedigree, NumericVector rf, double err, bool verbose, bool detailed_verbose, double tol, bool ret_H0);
RcppExport SEXP _mappoly2_est_hmm_map_biallelic_log_implementation(SEXP PHSEXP, SEXP GSEXP, SEXP pedigreeSEXP, SEXP rfSEXP, SEXP errSEXP, SEXP verboseSEXP, SEXP detailed_verboseSEXP, SEXP tolSEXP, SEXP ret_H0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< double >::type err(errSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type detailed_verbose(detailed_verboseSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_H0(ret_H0SEXP);
    rcpp_result_gen = Rcpp::wrap(est_hmm_map_biallelic_log_implementation(PH, G, pedigree, rf, err, verbose, detailed_verbose, tol, ret_H0));
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
// mappoly_chisq_test
NumericVector mappoly_chisq_test(List input_data);
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

static const R_CallMethodDef CallEntries[] = {
    {"_mappoly2_calc_haploprob_biallelic", (DL_FUNC) &_mappoly2_calc_haploprob_biallelic, 5},
    {"_mappoly2_calc_haploprob_biallelic_single", (DL_FUNC) &_mappoly2_calc_haploprob_biallelic_single, 4},
    {"_mappoly2_find_valid_permutations", (DL_FUNC) &_mappoly2_find_valid_permutations, 3},
    {"_mappoly2_vs_inserted_mrk", (DL_FUNC) &_mappoly2_vs_inserted_mrk, 5},
    {"_mappoly2_vs_biallelic_error", (DL_FUNC) &_mappoly2_vs_biallelic_error, 5},
    {"_mappoly2_est_hmm_map_biallelic_insert_marker", (DL_FUNC) &_mappoly2_est_hmm_map_biallelic_insert_marker, 10},
    {"_mappoly2_est_hmm_map_biallelic", (DL_FUNC) &_mappoly2_est_hmm_map_biallelic, 9},
    {"_mappoly2_est_hmm_map_biallelic_single", (DL_FUNC) &_mappoly2_est_hmm_map_biallelic_single, 8},
    {"_mappoly2_pairwise_rf_estimation_disc_rcpp", (DL_FUNC) &_mappoly2_pairwise_rf_estimation_disc_rcpp, 13},
    {"_mappoly2_twopt_phasing_cpp", (DL_FUNC) &_mappoly2_twopt_phasing_cpp, 6},
    {"_mappoly2_phasing_one", (DL_FUNC) &_mappoly2_phasing_one, 5},
    {"_mappoly2_vcf_get_probabilities", (DL_FUNC) &_mappoly2_vcf_get_probabilities, 2},
    {"_mappoly2_vcf_transform_dosage", (DL_FUNC) &_mappoly2_vcf_transform_dosage, 2},
    {"_mappoly2_vcf_get_ploidy", (DL_FUNC) &_mappoly2_vcf_get_ploidy, 2},
    {"_mappoly2_vcf_get_depth", (DL_FUNC) &_mappoly2_vcf_get_depth, 2},
    {"_mappoly2_est_hmm_map_biallelic_log_implementation", (DL_FUNC) &_mappoly2_est_hmm_map_biallelic_log_implementation, 9},
    {"_mappoly2_segreg_poly", (DL_FUNC) &_mappoly2_segreg_poly, 4},
    {"_mappoly2_mappoly_chisq_test", (DL_FUNC) &_mappoly2_mappoly_chisq_test, 1},
    {"_mappoly2_filter_non_conforming_classes", (DL_FUNC) &_mappoly2_filter_non_conforming_classes, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_mappoly2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
