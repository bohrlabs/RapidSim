#pragma once
#ifdef _WIN32
    #ifdef RS_ENGINE_EXPORTS
        #define RSENG_API __declspec(dllexport)
    #else
        #define RSENG_API __declspec(dllimport)
    #endif
#else
    #define RSENG_API __attribute__((visibility("default")))
#endif
#ifdef __cplusplus
extern "C" {
#endif

    typedef struct rseng_ctx rseng_ctx;

    RSENG_API int        rseng_version(int *major, int *minor, int *patch);
    RSENG_API int        rseng_check_license(const char *features_json);
    RSENG_API rseng_ctx *rseng_create(const char *project_path);
    RSENG_API void       rseng_destroy(rseng_ctx *ctx);
    RSENG_API int        rseng_step(rseng_ctx *ctx, double dt_sec);

#ifdef __cplusplus
}
#endif
