#include <oniguruma.h>

extern int onig_new_default(OnigRegex *regex, const OnigUChar *pattern, const OnigUChar *pattern_end, OnigOptionType option, OnigErrorInfo *einfo);

extern int NewOnigRegex(char *pattern, int pattern_length, int option,
                        OnigRegex *regex, OnigRegion **region, OnigErrorInfo **error_info, char **error_buffer);

extern int SearchOnigRegex(void *str, int str_length, int offset, int option,
                           OnigRegex regex, OnigRegion *region, OnigErrorInfo *error_info, char *error_buffer, int *captures, int *numCaptures);

extern int MatchOnigRegex(void *str, int str_length, int offset, int option,
                          OnigRegex regex, OnigRegion *region);

extern int LookupOnigCaptureByName(char *name, int name_length, OnigRegex regex, OnigRegion *region);

extern int GetCaptureNames(OnigRegex regex, void *buffer, int bufferSize, int *groupNumbers);
