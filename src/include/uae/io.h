#ifndef UAE_IO_H
#define UAE_IO_H

#include <stdio.h>
#ifdef WINUAE
#include <tchar.h>
#endif

#ifdef WINUAE
#define uae_tfopen _tfopen
#else
FILE *uae_tfopen(const TCHAR *path, const TCHAR *mode);
#endif

#endif /* UAE_IO_H */
