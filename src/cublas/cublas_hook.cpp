
// auto generate 34 apis

#include "cublas_subset.h"
#include "hook.h"
#include "macro_common.h"
#include "trace_profile.h"

HOOK_C_API HOOK_DECL_EXPORT void cublasSgemm(char transa, char transb, int m, int n, int k, float alpha, const float * A, int lda, const float * B, int ldb, float beta, float * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasSgemm");
    using func_ptr = void (*)(char, char, int, int, int, float, const float *, int, const float *, int, float, float *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasSgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT void cublasDgemm(char transa, char transb, int m, int n, int k, double alpha, const double * A, int lda, const double * B, int ldb, double beta, double * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasDgemm");
    using func_ptr = void (*)(char, char, int, int, int, double, const double *, int, const double *, int, double, double *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasDgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT void cublasCgemm(char transa, char transb, int m, int n, int k, cuComplex alpha, const cuComplex * A, int lda, const cuComplex * B, int ldb, cuComplex beta, cuComplex * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasCgemm");
    using func_ptr = void (*)(char, char, int, int, int, cuComplex, const cuComplex *, int, const cuComplex *, int, cuComplex, cuComplex *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT void cublasZgemm(char transa, char transb, int m, int n, int k, cuDoubleComplex alpha, const cuDoubleComplex * A, int lda, const cuDoubleComplex * B, int ldb, cuDoubleComplex beta, cuDoubleComplex * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasZgemm");
    using func_ptr = void (*)(char, char, int, int, int, cuDoubleComplex, const cuDoubleComplex *, int, const cuDoubleComplex *, int, cuDoubleComplex, cuDoubleComplex *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasZgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasSgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float * alpha, const float * A, int lda, const float * B, int ldb, const float * beta, float * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasSgemm_v2");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const float *, const float *, int, const float *, int, const float *, float *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasSgemm_v2"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasDgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double * alpha, const double * A, int lda, const double * B, int ldb, const double * beta, double * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasDgemm_v2");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const double *, const double *, int, const double *, int, const double *, double *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasDgemm_v2"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const cuComplex * A, int lda, const cuComplex * B, int ldb, const cuComplex * beta, cuComplex * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasCgemm_v2");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const cuComplex *, int, const cuComplex *, int, const cuComplex *, cuComplex *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemm_v2"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemm3m(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const cuComplex * A, int lda, const cuComplex * B, int ldb, const cuComplex * beta, cuComplex * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasCgemm3m");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const cuComplex *, int, const cuComplex *, int, const cuComplex *, cuComplex *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemm3m"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemm3mEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const void * A, cudaDataType Atype, int lda, const void * B, cudaDataType Btype, int ldb, const cuComplex * beta, void * C, cudaDataType Ctype, int ldc) {
    HOOK_TRACE_PROFILE("cublasCgemm3mEx");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const void *, cudaDataType, int, const void *, cudaDataType, int, const cuComplex *, void *, cudaDataType, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemm3mEx"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasZgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex * alpha, const cuDoubleComplex * A, int lda, const cuDoubleComplex * B, int ldb, const cuDoubleComplex * beta, cuDoubleComplex * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasZgemm_v2");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuDoubleComplex *, const cuDoubleComplex *, int, const cuDoubleComplex *, int, const cuDoubleComplex *, cuDoubleComplex *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasZgemm_v2"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasZgemm3m(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex * alpha, const cuDoubleComplex * A, int lda, const cuDoubleComplex * B, int ldb, const cuDoubleComplex * beta, cuDoubleComplex * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasZgemm3m");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuDoubleComplex *, const cuDoubleComplex *, int, const cuDoubleComplex *, int, const cuDoubleComplex *, cuDoubleComplex *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasZgemm3m"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasHgemm(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const __half * alpha, const __half * A, int lda, const __half * B, int ldb, const __half * beta, __half * C, int ldc) {
    HOOK_TRACE_PROFILE("cublasHgemm");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const __half *, const __half *, int, const __half *, int, const __half *, __half *, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasHgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasSgemmEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float * alpha, const void * A, cudaDataType Atype, int lda, const void * B, cudaDataType Btype, int ldb, const float * beta, void * C, cudaDataType Ctype, int ldc) {
    HOOK_TRACE_PROFILE("cublasSgemmEx");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const float *, const void *, cudaDataType, int, const void *, cudaDataType, int, const float *, void *, cudaDataType, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasSgemmEx"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasGemmEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void * alpha, const void * A, cudaDataType Atype, int lda, const void * B, cudaDataType Btype, int ldb, const void * beta, void * C, cudaDataType Ctype, int ldc, cublasComputeType_t computeType, cublasGemmAlgo_t algo) {
    HOOK_TRACE_PROFILE("cublasGemmEx");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const void *, const void *, cudaDataType, int, const void *, cudaDataType, int, const void *, void *, cudaDataType, int, cublasComputeType_t, cublasGemmAlgo_t);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasGemmEx"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc, computeType, algo);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemmEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const void * A, cudaDataType Atype, int lda, const void * B, cudaDataType Btype, int ldb, const cuComplex * beta, void * C, cudaDataType Ctype, int ldc) {
    HOOK_TRACE_PROFILE("cublasCgemmEx");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const void *, cudaDataType, int, const void *, cudaDataType, int, const cuComplex *, void *, cudaDataType, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemmEx"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasUint8gemmBias(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, cublasOperation_t transc, int m, int n, int k, const unsigned char * A, int A_bias, int lda, const unsigned char * B, int B_bias, int ldb, unsigned char * C, int C_bias, int ldc, int C_mult, int C_shift) {
    HOOK_TRACE_PROFILE("cublasUint8gemmBias");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, cublasOperation_t, int, int, int, const unsigned char *, int, int, const unsigned char *, int, int, unsigned char *, int, int, int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasUint8gemmBias"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, transc, m, n, k, A, A_bias, lda, B, B_bias, ldb, C, C_bias, ldc, C_mult, C_shift);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasHgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const __half * alpha, const __half * const* Aarray, int lda, const __half * const* Barray, int ldb, const __half * beta, __half * const* Carray, int ldc, int batchCount) {
    HOOK_TRACE_PROFILE("cublasHgemmBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const __half *, const __half * const*, int, const __half * const*, int, const __half *, __half * const*, int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasHgemmBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasSgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float * alpha, const float * const* Aarray, int lda, const float * const* Barray, int ldb, const float * beta, float * const* Carray, int ldc, int batchCount) {
    HOOK_TRACE_PROFILE("cublasSgemmBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const float *, const float * const*, int, const float * const*, int, const float *, float * const*, int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasSgemmBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasDgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double * alpha, const double * const* Aarray, int lda, const double * const* Barray, int ldb, const double * beta, double * const* Carray, int ldc, int batchCount) {
    HOOK_TRACE_PROFILE("cublasDgemmBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const double *, const double * const*, int, const double * const*, int, const double *, double * const*, int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasDgemmBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const cuComplex * const* Aarray, int lda, const cuComplex * const* Barray, int ldb, const cuComplex * beta, cuComplex * const* Carray, int ldc, int batchCount) {
    HOOK_TRACE_PROFILE("cublasCgemmBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const cuComplex * const*, int, const cuComplex * const*, int, const cuComplex *, cuComplex * const*, int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemmBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemm3mBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const cuComplex * const* Aarray, int lda, const cuComplex * const* Barray, int ldb, const cuComplex * beta, cuComplex * const* Carray, int ldc, int batchCount) {
    HOOK_TRACE_PROFILE("cublasCgemm3mBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const cuComplex * const*, int, const cuComplex * const*, int, const cuComplex *, cuComplex * const*, int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemm3mBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasZgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex * alpha, const cuDoubleComplex * const* Aarray, int lda, const cuDoubleComplex * const* Barray, int ldb, const cuDoubleComplex * beta, cuDoubleComplex * const* Carray, int ldc, int batchCount) {
    HOOK_TRACE_PROFILE("cublasZgemmBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuDoubleComplex *, const cuDoubleComplex * const*, int, const cuDoubleComplex * const*, int, const cuDoubleComplex *, cuDoubleComplex * const*, int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasZgemmBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasGemmBatchedEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void * alpha, const void * const* Aarray, cudaDataType Atype, int lda, const void * const* Barray, cudaDataType Btype, int ldb, const void * beta, void * const* Carray, cudaDataType Ctype, int ldc, int batchCount, cublasComputeType_t computeType, cublasGemmAlgo_t algo) {
    HOOK_TRACE_PROFILE("cublasGemmBatchedEx");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const void *, const void * const*, cudaDataType, int, const void * const*, cudaDataType, int, const void *, void * const*, cudaDataType, int, int, cublasComputeType_t, cublasGemmAlgo_t);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasGemmBatchedEx"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, Aarray, Atype, lda, Barray, Btype, ldb, beta, Carray, Ctype, ldc, batchCount, computeType, algo);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasGemmStridedBatchedEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void * alpha, const void * A, cudaDataType Atype, int lda, long long int strideA, const void * B, cudaDataType Btype, int ldb, long long int strideB, const void * beta, void * C, cudaDataType Ctype, int ldc, long long int strideC, int batchCount, cublasComputeType_t computeType, cublasGemmAlgo_t algo) {
    HOOK_TRACE_PROFILE("cublasGemmStridedBatchedEx");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const void *, const void *, cudaDataType, int, long long int, const void *, cudaDataType, int, long long int, const void *, void *, cudaDataType, int, long long int, int, cublasComputeType_t, cublasGemmAlgo_t);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasGemmStridedBatchedEx"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, Atype, lda, strideA, B, Btype, ldb, strideB, beta, C, Ctype, ldc, strideC, batchCount, computeType, algo);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasSgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float * alpha, const float * A, int lda, long long int strideA, const float * B, int ldb, long long int strideB, const float * beta, float * C, int ldc, long long int strideC, int batchCount) {
    HOOK_TRACE_PROFILE("cublasSgemmStridedBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const float *, const float *, int, long long int, const float *, int, long long int, const float *, float *, int, long long int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasSgemmStridedBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasDgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double * alpha, const double * A, int lda, long long int strideA, const double * B, int ldb, long long int strideB, const double * beta, double * C, int ldc, long long int strideC, int batchCount) {
    HOOK_TRACE_PROFILE("cublasDgemmStridedBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const double *, const double *, int, long long int, const double *, int, long long int, const double *, double *, int, long long int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasDgemmStridedBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const cuComplex * A, int lda, long long int strideA, const cuComplex * B, int ldb, long long int strideB, const cuComplex * beta, cuComplex * C, int ldc, long long int strideC, int batchCount) {
    HOOK_TRACE_PROFILE("cublasCgemmStridedBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const cuComplex *, int, long long int, const cuComplex *, int, long long int, const cuComplex *, cuComplex *, int, long long int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemmStridedBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasCgemm3mStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex * alpha, const cuComplex * A, int lda, long long int strideA, const cuComplex * B, int ldb, long long int strideB, const cuComplex * beta, cuComplex * C, int ldc, long long int strideC, int batchCount) {
    HOOK_TRACE_PROFILE("cublasCgemm3mStridedBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuComplex *, const cuComplex *, int, long long int, const cuComplex *, int, long long int, const cuComplex *, cuComplex *, int, long long int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasCgemm3mStridedBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasZgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex * alpha, const cuDoubleComplex * A, int lda, long long int strideA, const cuDoubleComplex * B, int ldb, long long int strideB, const cuDoubleComplex * beta, cuDoubleComplex * C, int ldc, long long int strideC, int batchCount) {
    HOOK_TRACE_PROFILE("cublasZgemmStridedBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const cuDoubleComplex *, const cuDoubleComplex *, int, long long int, const cuDoubleComplex *, int, long long int, const cuDoubleComplex *, cuDoubleComplex *, int, long long int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasZgemmStridedBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasHgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const __half * alpha, const __half * A, int lda, long long int strideA, const __half * B, int ldb, long long int strideB, const __half * beta, __half * C, int ldc, long long int strideC, int batchCount) {
    HOOK_TRACE_PROFILE("cublasHgemmStridedBatched");
    using func_ptr = cublasStatus_t (*)(cublasHandle_t, cublasOperation_t, cublasOperation_t, int, int, int, const __half *, const __half *, int, long long int, const __half *, int, long long int, const __half *, __half *, int, long long int, int);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasHgemmStridedBatched"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasXtSgemm(cublasXtHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, size_t m, size_t n, size_t k, const float * alpha, const float * A, size_t lda, const float * B, size_t ldb, const float * beta, float * C, size_t ldc) {
    HOOK_TRACE_PROFILE("cublasXtSgemm");
    using func_ptr = cublasStatus_t (*)(cublasXtHandle_t, cublasOperation_t, cublasOperation_t, size_t, size_t, size_t, const float *, const float *, size_t, const float *, size_t, const float *, float *, size_t);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasXtSgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasXtDgemm(cublasXtHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, size_t m, size_t n, size_t k, const double * alpha, const double * A, size_t lda, const double * B, size_t ldb, const double * beta, double * C, size_t ldc) {
    HOOK_TRACE_PROFILE("cublasXtDgemm");
    using func_ptr = cublasStatus_t (*)(cublasXtHandle_t, cublasOperation_t, cublasOperation_t, size_t, size_t, size_t, const double *, const double *, size_t, const double *, size_t, const double *, double *, size_t);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasXtDgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasXtCgemm(cublasXtHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, size_t m, size_t n, size_t k, const cuComplex * alpha, const cuComplex * A, size_t lda, const cuComplex * B, size_t ldb, const cuComplex * beta, cuComplex * C, size_t ldc) {
    HOOK_TRACE_PROFILE("cublasXtCgemm");
    using func_ptr = cublasStatus_t (*)(cublasXtHandle_t, cublasOperation_t, cublasOperation_t, size_t, size_t, size_t, const cuComplex *, const cuComplex *, size_t, const cuComplex *, size_t, const cuComplex *, cuComplex *, size_t);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasXtCgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

HOOK_C_API HOOK_DECL_EXPORT cublasStatus_t cublasXtZgemm(cublasXtHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, size_t m, size_t n, size_t k, const cuDoubleComplex * alpha, const cuDoubleComplex * A, size_t lda, const cuDoubleComplex * B, size_t ldb, const cuDoubleComplex * beta, cuDoubleComplex * C, size_t ldc) {
    HOOK_TRACE_PROFILE("cublasXtZgemm");
    using func_ptr = cublasStatus_t (*)(cublasXtHandle_t, cublasOperation_t, cublasOperation_t, size_t, size_t, size_t, const cuDoubleComplex *, const cuDoubleComplex *, size_t, const cuDoubleComplex *, size_t, const cuDoubleComplex *, cuDoubleComplex *, size_t);
    static auto func_entry = reinterpret_cast<func_ptr>(HOOK_CUBLAS_SYMBOL("cublasXtZgemm"));
    HOOK_CHECK(func_entry);
    return func_entry(handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}
