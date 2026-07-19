word32 fn0000000000401000(byte (* rcx)[], Eq_4 rdx, struct Eq_5 * rbp, Eq_6 r8, ptr64 * r9, struct Eq_21 & rbpOut)
{
    struct Eq_21 * rbp_14;
    Eq_8 tLoc08;
    tLoc08.ptr0000 = rbp;
    uint64 rax_13 = (uint64) fn000000000040100B(rcx, rdx, &tLoc08, r8, r9, out rbp_14);
    rbpOut = rbp_14;
    return (word32) rax_13;
}


word32 fn000000000040100B(byte (* rcx)[], Eq_4 rdx, struct Eq_17 * rbp, Eq_6 r8, ptr64 * r9, word64 & rbpOut)
{
    rbp->ptr0010 = rcx;
    rbp->t0018.u0 = (uint64) rdx;
    rbp->t0020.u0 = (uint64) r8;
    rbp->ptr0028 = r9;
    uint64 rax_197;
    if (rbp->t0018.u1 < 0x04)
        rax_197 = 0x00;
    else if (rbp->t0020.u1 >= 100 && (rbp->t0020).u1 < 200)
    {
        *rbp->ptr0028 = &g_t404000;
        rax_197 = 0x01;
    }
    else if (rbp->t0020.u1 >= 200 && (rbp->t0020).u1 < 300)
    {
        *rbp->ptr0028 = &g_t404005;
        rax_197 = 0x01;
    }
    else if (rbp->t0020.u1 >= 1000 && (rbp->t0020).u1 < 2000)
    {
        *rbp->ptr0028 = &g_t404009;
        rax_197 = 0x01;
    }
    else if (rbp->t0018.u1 >= 0x05 && (memcmp(rbp->ptr0010, &g_v40400F, 0x04) == 0x00 || memcmp(rbp->ptr0010, &g_v404014, 0x04) == 0x00))
    {
        *rbp->ptr0028 = &g_t404019;
        rax_197 = 0x01;
    }
    else
    {
        if (rbp->t0018.u1 >= 0x04 && (memcmp(rbp->ptr0010, &g_v40401F, 0x04) == 0x00 || (memcmp(rbp->ptr0010, &g_v404024, 0x04) == 0x00 || ((rbp->ptr0010)[0] == 0x2E || (rbp->ptr0010)[0] == 0x23))))
        {
            rbp->tFFFFFFFC.u1 = (up32) 0x00;
            while (true)
            {
                Eq_4 eax_156;
                if (rbp->t0018.u1 > 100)
                    eax_156.u0 = 100;
                else
                    eax_156.u1 = rbp->t0018.u1;
                if (rbp->tFFFFFFFC.u1 >= eax_156)
                    break;
                if (rbp->ptr0010[(uint64) rbp->tFFFFFFFC.u1] == 0x7B && (rbp->ptr0010)[(uint64) ((rbp->tFFFFFFFC).u1 + 0x01)] != 0x7B)
                {
                    *rbp->ptr0028 = &g_t404029;
                    rax_197 = 0x01;
                    goto l00000000004013E4;
                }
                rbp->tFFFFFFFC.u1 = (up32) (rbp->tFFFFFFFC.u1 + 0x01);
            }
        }
        if (rbp->t0018.u1 >= 0x03 && (memcmp(rbp->ptr0010, &g_v40402E, 0x04) == 0x00 || (memcmp(rbp->ptr0010, &g_v404033, 0x04) == 0x00 || (memcmp(rbp->ptr0010, &g_v404038, 0x05) == 0x00 || (memcmp(rbp->ptr0010, &g_v40403E, 0x08) == 0x00 || (memcmp(rbp->ptr0010, &g_v404047, 0x06) == 0x00 || memcmp(rbp->ptr0010, &g_v40404E, 0x08) == 0x00))))))
        {
            *rbp->ptr0028 = &g_t404057;
            rax_197 = 0x01;
        }
        else
            rax_197 = 0x00;
    }
l00000000004013E4:
    rbpOut = rbp->qw0000;
    return (word32) rax_197;
}


word32 fn00000000004013F0(Eq_344 rcx, struct Eq_345 * rdx, struct Eq_346 * rbp, word64 & rbpOut)
{
    word64 rbp_15;
    Eq_347 tLoc08;
    tLoc08.ptr0000 = rbp;
    uint64 rax_14 = (uint64) fn00000000004013FB(rcx, rdx, &tLoc08, out rbp_15);
    rbpOut = rbp_15;
    return (word32) rax_14;
}


word32 fn00000000004013FB(Eq_344 rcx, struct Eq_345 * rdx, struct Eq_5 * rbp, word64 & rbpOut)
{
    word128 xmm0_468;
    word128 xmm0_410;
    rbp->t0010.u1 = (uint64) rcx;
    rbp->ptr0018 = rdx;
    rbp->ptrFFFFFFE0 = null;
    rbp->ptrFFFFFFD8 = null;
    rbp->dwFFFFFFC8 = 0x00;
    rbp->dwFFFFFFC4 = 0x00;
    rbp->bFFFFFDC4 = 0x00;
    memset(rbp - 571, 0, 0x01FF);
    rbp->dwFFFFFDC0 = 0x00;
    printf("\n========================================\n");
    printf("  EDGE RESOURCES.PAK - WEB TOOL\n");
    printf("  Only HTML/CSS/JS\n");
    printf("========================================\n");
    uint64 rax_1182;
    if (rbp->t0010.u0 < 0x04)
    {
        printf("\nUsage:\n");
        printf("  %s <resources.pak> -e <output_dir>   Extract\n", rbp->ptr0018->ptr0000);
        printf("  %s <resources.pak> -p <modified_dir>  Pack\n", rbp->ptr0018->ptr0000);
        printf("\nExamples:\n");
        printf("  %s resources.pak -e extracted/\n", rbp->ptr0018->ptr0000);
        printf("  %s resources.pak -p extracted/\n", rbp->ptr0018->ptr0000);
        rax_1182 = 0x00;
        goto l0000000000402A82;
    }
    if (strcmp(rbp->ptr0018->ptr0010, &g_b40419C) == 0x00)
    {
        rbp->dwFFFFFFC8 = 0x01;
        strcpy(rbp - 572, rbp->ptr0018->ptr0018);
    }
    else
    {
        if (strcmp(rbp->ptr0018->ptr0010, &g_b40419F) != 0x00)
        {
            fprintf((char *) __iob_func() + 96, &g_b4041A2, 0x00);
            rax_1182 = 0x01;
            goto l0000000000402A82;
        }
        rbp->dwFFFFFFC4 = 0x01;
        strcpy(rbp - 572, rbp->ptr0018->ptr0018);
    }
    rbp->ptrFFFFFFF8 = fopen(rbp->ptr0018->ptr0008, &g_b4041B9);
    if (rbp->ptrFFFFFFF8 == null)
    {
        fprintf((char *) __iob_func() + 96, &g_b4041BC, 0x00);
        rax_1182 = 0x01;
        goto l0000000000402A82;
    }
    if (SEQ(SLICE(rbp - 20, word32, 32), fread(rbp - 20, 0x0C, 0x01, rbp->ptrFFFFFFF8)) != 0x01)
    {
        fprintf((char *) __iob_func() + 96, &g_b4041D3, 0x00);
        fclose(rbp->ptrFFFFFFF8);
        rax_1182 = 0x01;
        goto l0000000000402A82;
    }
    printf("\n=== PAK INFO ===\n");
    printf("Version: %u\n", rbp->dwFFFFFFEC);
    printf("Encoding: %u\n", rbp->dwFFFFFFF0);
    printf("Resources: %u\n", rbp->tFFFFFFF4.u0);
    printf("================\n\n");
    rbp->ptrFFFFFFE0 = malloc(rbp->tFFFFFFF4.u0 *s 0x0C);
    if (rbp->ptrFFFFFFE0 == null)
    {
        fprintf((char *) __iob_func() + 96, &g_b40423E, 0x00);
        fclose(rbp->ptrFFFFFFF8);
        rax_1182 = 0x01;
        goto l0000000000402A82;
    }
    printf("Reading %u entries...\n", rbp->tFFFFFFF4.u0);
    void * rax_229 = rbp->ptrFFFFFFE0;
    if (SEQ(SLICE(rax_229, word32, 32), fread(rax_229, 0x0C, rbp->tFFFFFFF4.u0, rbp->ptrFFFFFFF8)) != (uint64) (rbp->tFFFFFFF4).u0)
    {
        fprintf((char *) __iob_func() + 96, &g_b404277, 0x00);
        free(rbp->ptrFFFFFFE0);
        fclose(rbp->ptrFFFFFFF8);
        rax_1182 = 0x01;
        goto l0000000000402A82;
    }
    printf("Done reading entries\n");
    fseek(rbp->ptrFFFFFFF8, 0, 2);
    rbp->tFFFFFDBC.u0 = (int32) ftell(rbp->ptrFFFFFFF8);
    fseek(rbp->ptrFFFFFFF8, 0, 0);
    printf("File size: %.2f MB (%ld bytes)\n", (real64) rbp->tFFFFFDBC.u0 / g_r4042D0, rbp->tFFFFFDBC.u0);
    rbp->ptrFFFFFFD8 = malloc(rbp->tFFFFFDBC.u0);
    if (rbp->ptrFFFFFFD8 == null)
    {
        fprintf((char *) __iob_func() + 96, &g_b4042D8, 0x00);
        free(rbp->ptrFFFFFFE0);
        fclose(rbp->ptrFFFFFFF8);
        rax_1182 = 0x01;
        goto l0000000000402A82;
    }
    fseek(rbp->ptrFFFFFFF8, 0, 0);
    void * rax_339 = rbp->ptrFFFFFFD8;
    if (SEQ(SLICE(rax_339, word32, 32), fread(rax_339, 0x01, rbp->tFFFFFDBC.u0, rbp->ptrFFFFFFF8)) != (int64) (rbp->tFFFFFDBC).u0)
    {
        fprintf((char *) __iob_func() + 96, &g_b4042F7, 0x00);
        free(rbp->ptrFFFFFFD8);
        free(rbp->ptrFFFFFFE0);
        fclose(rbp->ptrFFFFFFF8);
        rax_1182 = 0x01;
        goto l0000000000402A82;
    }
    rbp->tFFFFFFD0.u0 = (int64) rbp->tFFFFFDBC.u0;
    fclose(rbp->ptrFFFFFFF8);
    printf("Done reading data\n\n");
    rbp->qwFFFFFDB0 = 0x00;
    rbp->qwFFFFFDA8 = 0x00;
    rbp->dwFFFFFDA4 = 0x00;
    rbp->dwFFFFFDA0 = 0x00;
    rbp->dwFFFFFD9C = 0x00;
    rbp->dwFFFFFD98 = 0x00;
    printf("Analyzing resources...\n");
    rbp->tFFFFFFCC.u0 = 0x00;
    while (rbp->tFFFFFFCC.u0 < (rbp->tFFFFFFF4).u0)
    {
        rbp->ptrFFFFFD90 = (struct Eq_1040 *) ((char *) rbp->ptrFFFFFFE0 + (uint64) (rbp->tFFFFFFCC).u0 *s 0x0C);
        rbp->qwFFFFFDB0 += (uint64) rbp->ptrFFFFFD90->dw0008;
        if ((uint64) (rbp->ptrFFFFFD90->dw0004 + (rbp->ptrFFFFFD90)->dw0008) <= (rbp->tFFFFFFD0).u0 && (rbp->ptrFFFFFD90)->dw0008 != 0x00)
        {
            ++rbp->dwFFFFFD98;
            rbp->ptrFFFFFD88 = null;
            rbp->ptrFFFFFD80 = (char *) rbp->ptrFFFFFFD8 + (uint64) (rbp->ptrFFFFFD90)->dw0004;
            if (fn0000000000401000(rbp->ptrFFFFFD80, (uint64) rbp->ptrFFFFFD90->dw0008, rbp, (uint64) rbp->ptrFFFFFD90->dw0000, rbp - 632, out rbp) != 0x00)
            {
                rbp->qwFFFFFDA8 += (uint64) rbp->ptrFFFFFD90->dw0008;
                if (strcmp(rbp->ptrFFFFFD88, &g_b40433C) == 0x00)
                    ++rbp->dwFFFFFDA4;
                else if (strcmp(rbp->ptrFFFFFD88, &g_b404342) == 0x00)
                    ++rbp->dwFFFFFDA0;
                else if (strcmp(rbp->ptrFFFFFD88, &g_b404347) == 0x00)
                    ++rbp->dwFFFFFD9C;
            }
        }
        else
            ++rbp->dwFFFFFDC0;
        rbp->tFFFFFFCC.u0 = (int32) (rbp->tFFFFFFCC.u0 + 0x01);
    }
    printf("\n=== MEMORY INFO ===\n");
    struct Eq_5 * rbp_409 = fn0000000000402B00(rbp->qwFFFFFDB0, rbp, out xmm0_410);
    printf("Total PAK size: %.2f MB (%zu bytes)\n", (real64) xmm0_410 / g_r404388, rbp_409->qwFFFFFDB0);
    word128 xmm0_433;
    rbp = fn0000000000402B00(rbp_409->qwFFFFFDA8, rbp_409, out xmm0_433);
    printf("HTML/CSS/JS size: %.2f MB (%zu bytes)\n", (real64) xmm0_433 / g_r4043B8, rbp->qwFFFFFDA8);
    word128 xmm0_462;
    if (rbp->qwFFFFFDB0 > 0x00)
    {
        struct Eq_5 * rbp_467 = fn0000000000402B00(rbp->qwFFFFFDA8, rbp, out xmm0_468);
        uint64 rax_478 = rbp_467->qwFFFFFDB0;
        rbp_467->rFFFFFD78 = (real64) xmm0_468 * g_r4043D0;
        word128 xmm0_485;
        rbp = fn0000000000402B00(rax_478, rbp_467, out xmm0_485);
        real64 v32_492 = rbp->rFFFFFD78 / (real64) xmm0_485;
        xmm0_462 = SEQ(SLICE(xmm0_485, word64, 64), v32_492);
    }
    else
        xmm0_462 = (word128) g_qw4043D8;
    printf("Usage: %.2f%%\n", (real64) xmm0_462);
    printf("\nResources:\n");
    printf("  Valid: %d\n", rbp->dwFFFFFD98);
    printf("  Invalid: %d\n", rbp->dwFFFFFDC0);
    printf("  HTML: %d\n", rbp->dwFFFFFDA4);
    printf("  CSS:  %d\n", rbp->dwFFFFFDA0);
    printf("  JS:   %d\n", rbp->dwFFFFFD9C);
    printf("  Other: %d\n", rbp->dwFFFFFD98 - rbp->dwFFFFFDA4 - rbp->dwFFFFFDA0 - rbp->dwFFFFFD9C);
    printf("==================\n\n");
    if (rbp->dwFFFFFFC8 != 0x00)
    {
        rbp->dwFFFFFB74 = 0x00;
        printf("Creating directory: %s\n", rbp - 572);
        _mkdir(rbp - 572);
        printf("Extracting HTML/CSS/JS...\n\n");
        rbp->tFFFFFFCC.u0 = 0x00;
        while (rbp->tFFFFFFCC.u0 < (rbp->tFFFFFFF4).u0)
        {
            rbp->ptrFFFFFB68 = (struct Eq_1240 *) ((char *) rbp->ptrFFFFFFE0 + (uint64) (rbp->tFFFFFFCC).u0 *s 0x0C);
            if ((uint64) (rbp->ptrFFFFFB68->dw0004 + ((rbp->ptrFFFFFB68)->t0008).u0) <= (rbp->tFFFFFFD0).u0 && ((rbp->ptrFFFFFB68)->t0008).u0 != 0x00)
            {
                rbp->ptrFFFFFB60 = (char *) rbp->ptrFFFFFFD8 + (uint64) (rbp->ptrFFFFFB68)->dw0004;
                rbp->ptrFFFFFB58 = null;
                if (fn0000000000401000(rbp->ptrFFFFFB60, (uint64) rbp->ptrFFFFFB68->t0008.u0, rbp, (uint64) rbp->ptrFFFFFB68->dw0000, rbp - 1192, out rbp) != 0x00)
                {
                    sprintf(rbp - 0x0488, "%s/resource_%u%s", rbp - 572, rbp->ptrFFFFFB68->dw0000, rbp->ptrFFFFFB58);
                    rbp->ptrFFFFFB50 = fopen(rbp - 0x0488, &g_b404494);
                    if (rbp->ptrFFFFFB50 != null)
                    {
                        fwrite(rbp->ptrFFFFFB60, 0x01, rbp->ptrFFFFFB68->t0008.u0, rbp->ptrFFFFFB50);
                        fclose(rbp->ptrFFFFFB50);
                        ++rbp->dwFFFFFB74;
                        if ((int64) rbp->dwFFFFFB74 % 0x0A == 0x00)
                            printf("  Extracted %d files...\n", rbp->dwFFFFFB74);
                    }
                }
            }
            rbp->tFFFFFFCC.u0 = (int32) (rbp->tFFFFFFCC.u0 + 0x01);
        }
        printf("\n=== EXTRACTED ===\n");
        printf("Total files: %d\n", rbp->dwFFFFFB74);
        printf("Location: %s\n", rbp - 572);
        printf("================\n");
    }
    if (rbp->dwFFFFFFC4 != 0x00)
    {
        rbp->dwFFFFF94C = 0x00;
        printf("\nWARNING: You are about to create a new PAK file!\n");
        printf("Continue? (y/n): ");
        fgets(rbp - 0x06BE, 0x0A, __iob_func());
        if (rbp->bFFFFF942 != 121 && rbp->bFFFFF942 != 0x59)
        {
            printf("Cancelled!\n");
            free(rbp->ptrFFFFFFD8);
            free(rbp->ptrFFFFFFE0);
            rax_1182 = 0x00;
            goto l0000000000402A82;
        }
        printf("\n=== PACKING ===\n");
        printf("Reading modified files from: %s\n", rbp - 572);
        sprintf(rbp - 1712, "%s.new.pak", rbp->ptr0018->ptr0008);
        rbp->ptrFFFFF938 = fopen(rbp - 1712, &g_b404584);
        if (rbp->ptrFFFFF938 == null)
        {
            fprintf((char *) __iob_func() + 96, &g_b404587, 0x00);
            free(rbp->ptrFFFFFFD8);
            free(rbp->ptrFFFFFFE0);
            rax_1182 = 0x01;
            goto l0000000000402A82;
        }
        void * rax_717 = rbp - 20;
        if (SEQ(SLICE(rax_717, word32, 32), fwrite(rax_717, 0x0C, 0x01, rbp->ptrFFFFF938)) != 0x01)
        {
            fprintf((char *) __iob_func() + 96, &g_b4045A5, 0x00);
            fclose(rbp->ptrFFFFF938);
            free(rbp->ptrFFFFFFD8);
            free(rbp->ptrFFFFFFE0);
            rax_1182 = 0x01;
            goto l0000000000402A82;
        }
        rbp->ptrFFFFF930 = malloc(rbp->tFFFFFFF4.u0 *s 0x0C);
        if (rbp->ptrFFFFF930 == null)
        {
            fprintf((char *) __iob_func() + 96, &g_b4045C1, 0x00);
            fclose(rbp->ptrFFFFF938);
            free(rbp->ptrFFFFFFD8);
            free(rbp->ptrFFFFFFE0);
            rax_1182 = 0x01;
            goto l0000000000402A82;
        }
        memcpy(rbp->ptrFFFFF930, rbp->ptrFFFFFFE0, rbp->tFFFFFFF4.u0 *s 0x0C);
        rbp->dwFFFFF92C = rbp->tFFFFFFF4.u0 *s 0x0C + 0x0C;
        rbp->tFFFFFFCC.u0 = 0x00;
        while (rbp->tFFFFFFCC.u0 < (rbp->tFFFFFFF4).u0)
        {
            rbp->ptrFFFFF920 = (struct Eq_1896 *) ((char *) rbp->ptrFFFFF930 + (uint64) (rbp->tFFFFFFCC).u0 *s 0x0C);
            if ((uint64) (rbp->ptrFFFFF920->dw0004 + ((rbp->ptrFFFFF920)->t0008).u0) <= (rbp->tFFFFFFD0).u0 && ((rbp->ptrFFFFF920)->t0008).u0 != 0x00)
            {
                rbp->ptrFFFFF918 = (char *) rbp->ptrFFFFFFD8 + (uint64) (rbp->ptrFFFFF920)->dw0004;
                rbp->ptrFFFFF910 = null;
                if (fn0000000000401000(rbp->ptrFFFFF918, (uint64) rbp->ptrFFFFF920->t0008.u0, rbp, (uint64) rbp->ptrFFFFF920->dw0000, rbp - 1776, out rbp) != 0x00)
                {
                    sprintf(rbp - 2288, "%s/resource_%u%s", rbp - 572, rbp->ptrFFFFF920->dw0000, rbp->ptrFFFFF910);
                    rbp->ptrFFFFF708 = fopen(rbp - 2288, &g_b4045E8);
                    if (rbp->ptrFFFFF708 != null)
                    {
                        fseek(rbp->ptrFFFFF708, 0, 2);
                        rbp->tFFFFF704.u0 = (int32) ftell(rbp->ptrFFFFF708);
                        fseek(rbp->ptrFFFFF708, 0, 0);
                        rbp->ptrFFFFF6F8 = malloc(rbp->tFFFFF704.u0);
                        if (rbp->ptrFFFFF6F8 != null)
                        {
                            fread(rbp->ptrFFFFF6F8, 0x01, rbp->tFFFFF704.u0, rbp->ptrFFFFF708);
                            rbp->ptrFFFFF920->dw0004 = rbp->dwFFFFF92C;
                            rbp->ptrFFFFF920->t0008.u0 = rbp->tFFFFF704.u0;
                            fwrite(rbp->ptrFFFFF6F8, 0x01, rbp->tFFFFF704.u0, rbp->ptrFFFFF938);
                            rbp->dwFFFFF92C += rbp->tFFFFF704.u0;
                            free(rbp->ptrFFFFF6F8);
                            ++rbp->dwFFFFF94C;
                            printf("  Replaced ID: %u (new size: %ld bytes)\n", rbp->ptrFFFFF920->dw0000, rbp->tFFFFF704.u0);
                        }
                        fclose(rbp->ptrFFFFF708);
                    }
                    else
                    {
                        fwrite(rbp->ptrFFFFF918, 0x01, rbp->ptrFFFFF920->t0008.u0, rbp->ptrFFFFF938);
                        rbp->dwFFFFF92C += rbp->ptrFFFFF920->t0008.u0;
                    }
                }
                else
                {
                    fwrite(rbp->ptrFFFFF918, 0x01, rbp->ptrFFFFF920->t0008.u0, rbp->ptrFFFFF938);
                    rbp->dwFFFFF92C += rbp->ptrFFFFF920->t0008.u0;
                }
            }
            rbp->tFFFFFFCC.u0 = (int32) (rbp->tFFFFFFCC.u0 + 0x01);
        }
        fseek(rbp->ptrFFFFF938, 0x0C, 0);
        void * rax_810 = rbp->ptrFFFFF930;
        if (SEQ(SLICE(rax_810, word32, 32), fwrite(rax_810, 0x0C, rbp->tFFFFFFF4.u0, rbp->ptrFFFFF938)) != (uint64) (rbp->tFFFFFFF4).u0)
        {
            fprintf((char *) __iob_func() + 96, &g_b404614, 0x00);
            free(rbp->ptrFFFFF930);
            fclose(rbp->ptrFFFFF938);
            free(rbp->ptrFFFFFFD8);
            free(rbp->ptrFFFFFFE0);
            rax_1182 = 0x01;
l0000000000402A82:
            rbpOut = rbp->qw0000;
            return (word32) rax_1182;
        }
        free(rbp->ptrFFFFF930);
        fclose(rbp->ptrFFFFF938);
        printf("\nModified: %d resources\n", rbp->dwFFFFF94C);
        printf("New PAK: %s\n", rbp - 1712);
        printf("=== DONE ===\n");
    }
    free(rbp->ptrFFFFFFD8);
    free(rbp->ptrFFFFFFE0);
    rax_1182 = 0x00;
    goto l0000000000402A82;
}


void fn0000000000402A93(word64 rcx, struct Eq_2306 * rbp)
{
    rbp->qw0010 = rcx;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    if (rbp->dwFFFFFFFC < 0x00)
    {
        rbp->rFFFFFFF0 = (real64) rbp->qwFFFFFFF8;
        rbp->rFFFFFFF0 += g_r404668;
    }
}


void fn0000000000402A93(word64 rcx, struct Eq_2306 * rbp)
{
    rbp->qw0010 = rcx;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    if (rbp->dwFFFFFFFC < 0x00)
    {
        rbp->rFFFFFFF0 = (real64) rbp->qwFFFFFFF8;
        rbp->rFFFFFFF0 += g_r404668;
    }
}


struct Eq_5 * fn0000000000402B00(uint64 rcx, struct Eq_5 * rbp, union Eq_989 & xmm0Out)
{
    Eq_989 xmm0_13;
    Eq_2337 tLoc08;
    tLoc08.ptr0000 = rbp;
    struct Eq_5 * rbp_11 = fn0000000000402B0B(rcx, &tLoc08, out xmm0_13);
    xmm0Out = xmm0_13;
    return rbp_11;
}


struct Eq_2345 * fn0000000000402B0B(uint64 rcx, struct Eq_2345 * rbp, union Eq_2348 & xmm0Out)
{
    rbp->qw0010 = rcx;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    Eq_2348 xmm0_26;
    if (rbp->dwFFFFFFFC >= 0x00)
    {
        word64 xmm0;
        xmm0_26 = SEQ(SLICE(xmm0, word64, 64), (real64) rbp->qwFFFFFFF8);
    }
    else
    {
        rbp->rFFFFFFF0 = (real64) rbp->qwFFFFFFF8;
        rbp->rFFFFFFF0 += g_r404670;
        xmm0_26.u0 = (word128) rbp->rFFFFFFF0;
    }
    struct Eq_2345 * rbp_33 = rbp->ptr0000;
    xmm0Out = xmm0_26;
    return rbp_33;
}


struct Eq_2345 * fn0000000000402B0B(uint64 rcx, struct Eq_2345 * rbp, union Eq_2348 & xmm0Out)
{
    rbp->qw0010 = rcx;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    Eq_2348 xmm0_26;
    if (rbp->dwFFFFFFFC >= 0x00)
    {
        word64 xmm0;
        xmm0_26 = SEQ(SLICE(xmm0, word64, 64), (real64) rbp->qwFFFFFFF8);
    }
    else
    {
        rbp->rFFFFFFF0 = (real64) rbp->qwFFFFFFF8;
        rbp->rFFFFFFF0 += g_r404670;
        xmm0_26.u0 = (word128) rbp->rFFFFFFF0;
    }
    struct Eq_2345 * rbp_33 = rbp->ptr0000;
    xmm0Out = xmm0_26;
    return rbp_33;
}


void fn0000000000402B71(word64 rcx, struct Eq_2399 * rbp)
{
    rbp->qw0010 = rcx;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    if (rbp->dwFFFFFFFC < 0x00)
    {
        rbp->rFFFFFFF0 = (real64) rbp->qwFFFFFFF8;
        rbp->rFFFFFFF0 += g_r404678;
    }
}


void fn0000000000402B71(word64 rcx, struct Eq_2399 * rbp)
{
    rbp->qw0010 = rcx;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    if (rbp->dwFFFFFFFC < 0x00)
    {
        rbp->rFFFFFFF0 = (real64) rbp->qwFFFFFFF8;
        rbp->rFFFFFFF0 += g_r404678;
    }
}


word64 fn0000000000402BCC(struct Eq_2431 * rbp, word128 xmm0, word64 & rbpOut)
{
    word64 rbp_11;
    Eq_2433 tLoc08;
    tLoc08.ptr0000 = rbp;
    word64 rax_10 = fn0000000000402BD7(&tLoc08, xmm0, out rbp_11);
    rbpOut = rbp_11;
    return rax_10;
}


uint64 fn0000000000402BD7(struct Eq_2440 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->t0010.u0 = (uint64) (word64) xmm0;
    rbp->tFFFFFFFC.u1 = rbp->t0010.u1;
    uint64 rax_103;
    if (rbp->tFFFFFFFC.u1 == 0x00)
        rax_103 = 0x00;
    else
    {
        rbp->dwFFFFFFF8 = (rbp->tFFFFFFFC.u1 >> 0x17 & 0xFF) - 0x96;
        rbp->dwFFFFFFF4 = rbp->tFFFFFFFC.u1 & 0x007FFFFF | 0x00800000;
        if (rbp->dwFFFFFFF8 >= 0x29)
            rax_103 = ~0x00;
        else if (rbp->dwFFFFFFF8 >= 0x00)
            rax_103 = (uint64) rbp->dwFFFFFFF4 << rbp->b0008;
        else if (rbp->dwFFFFFFF8 >= ~0x16)
        {
            word32 eax_63 = 0x00 - rbp->dwFFFFFFF8;
            rbp->qwFFFFFFE8 = (uint64) rbp->dwFFFFFFF4;
            rax_103 = (uint64) (rbp->qwFFFFFFE8 >> (byte) eax_63);
        }
        else
            rax_103 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_103;
}


uint64 fn0000000000402BD7(struct Eq_2440 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->t0010.u0 = (uint64) (word64) xmm0;
    rbp->tFFFFFFFC.u1 = rbp->t0010.u1;
    uint64 rax_103;
    if (rbp->tFFFFFFFC.u1 == 0x00)
        rax_103 = 0x00;
    else
    {
        rbp->dwFFFFFFF8 = (rbp->tFFFFFFFC.u1 >> 0x17 & 0xFF) - 0x96;
        rbp->dwFFFFFFF4 = rbp->tFFFFFFFC.u1 & 0x007FFFFF | 0x00800000;
        if (rbp->dwFFFFFFF8 >= 0x29)
            rax_103 = ~0x00;
        else if (rbp->dwFFFFFFF8 >= 0x00)
            rax_103 = (uint64) rbp->dwFFFFFFF4 << rbp->b0008;
        else if (rbp->dwFFFFFFF8 >= ~0x16)
        {
            word32 eax_63 = 0x00 - rbp->dwFFFFFFF8;
            rbp->qwFFFFFFE8 = (uint64) rbp->dwFFFFFFF4;
            rax_103 = (uint64) (rbp->qwFFFFFFE8 >> (byte) eax_63);
        }
        else
            rax_103 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_103;
}


uint64 fn0000000000402BD7(struct Eq_2440 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->t0010.u0 = (uint64) (word64) xmm0;
    rbp->tFFFFFFFC.u1 = rbp->t0010.u1;
    uint64 rax_103;
    if (rbp->tFFFFFFFC.u1 == 0x00)
        rax_103 = 0x00;
    else
    {
        rbp->dwFFFFFFF8 = (rbp->tFFFFFFFC.u1 >> 0x17 & 0xFF) - 0x96;
        rbp->dwFFFFFFF4 = rbp->tFFFFFFFC.u1 & 0x007FFFFF | 0x00800000;
        if (rbp->dwFFFFFFF8 >= 0x29)
            rax_103 = ~0x00;
        else if (rbp->dwFFFFFFF8 >= 0x00)
            rax_103 = (uint64) rbp->dwFFFFFFF4 << rbp->b0008;
        else if (rbp->dwFFFFFFF8 >= ~0x16)
        {
            word32 eax_63 = 0x00 - rbp->dwFFFFFFF8;
            rbp->qwFFFFFFE8 = (uint64) rbp->dwFFFFFFF4;
            rax_103 = (uint64) (rbp->qwFFFFFFE8 >> (byte) eax_63);
        }
        else
            rax_103 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_103;
}


uint64 fn0000000000402BD7(struct Eq_2440 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->t0010.u0 = (uint64) (word64) xmm0;
    rbp->tFFFFFFFC.u1 = rbp->t0010.u1;
    uint64 rax_103;
    if (rbp->tFFFFFFFC.u1 == 0x00)
        rax_103 = 0x00;
    else
    {
        rbp->dwFFFFFFF8 = (rbp->tFFFFFFFC.u1 >> 0x17 & 0xFF) - 0x96;
        rbp->dwFFFFFFF4 = rbp->tFFFFFFFC.u1 & 0x007FFFFF | 0x00800000;
        if (rbp->dwFFFFFFF8 >= 0x29)
            rax_103 = ~0x00;
        else if (rbp->dwFFFFFFF8 >= 0x00)
            rax_103 = (uint64) rbp->dwFFFFFFF4 << rbp->b0008;
        else if (rbp->dwFFFFFFF8 >= ~0x16)
        {
            word32 eax_63 = 0x00 - rbp->dwFFFFFFF8;
            rbp->qwFFFFFFE8 = (uint64) rbp->dwFFFFFFF4;
            rax_103 = (uint64) (rbp->qwFFFFFFE8 >> (byte) eax_63);
        }
        else
            rax_103 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_103;
}


void fn0000000000402CAD(struct Eq_2431 * rbp, word128 xmm0)
{
    rbp->t0010.u1 = (word64) (word64) xmm0;
    word128 xmm0_7 = (word128) g_dw404680;
    word128 xmm1_8 = (word128) rbp->t0010.u0;
    uint32 eax_17 = 0x00;
    if (!PARITY_EVEN((real32) xmm1_8 - (real32) xmm0_7))
        eax_17 = (uint32) ((real32) xmm1_8 >= (real32) xmm0_7);
    rbp->dwFFFFFFF4 = eax_17;
    word128 xmm0_28;
    if (eax_17 != 0x00)
        xmm0_28 = (word128) rbp->t0010.u0;
    else
    {
        word128 xmm0_25 = (word128) g_dw404684;
        xmm0_28 = SEQ(SLICE(xmm0_25, word96, 32), (real32) xmm0_25 - (rbp->t0010).u0);
    }
    struct Eq_2587 * rbp_36;
    rbp_36->qwFFFFFFF8 = fn0000000000402BCC(rbp, xmm0_28, out rbp_36);
    rbp_36->dwFFFFFFF4 == 0x00;
}


word64 fn0000000000402D35(struct Eq_2599 * rbp, word128 xmm0, word64 & rbpOut)
{
    word64 rbp_11;
    Eq_2601 tLoc08;
    tLoc08.ptr0000 = rbp;
    word64 rax_10 = fn0000000000402D40(&tLoc08, xmm0, out rbp_11);
    rbpOut = rbp_11;
    return rax_10;
}


uint64 fn0000000000402D40(struct Eq_2608 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->qw0010 = (word64) xmm0;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    uint64 rax_50;
    if (rbp->qwFFFFFFF8 == 0x00)
        rax_50 = 0x00;
    else
    {
        rbp->dwFFFFFFF4 = (rbp->dwFFFFFFFC >> 0x14 & 0x07FF) - 0x0433;
        rbp->qwFFFFFFE8 = rbp->qwFFFFFFF8 & 0xFFFFFFFFFFFFF | 0x10000000000000;
        if (rbp->dwFFFFFFF4 >= 0x0C)
            rax_50 = ~0x00;
        else if (rbp->dwFFFFFFF4 >= 0x00)
            rax_50 = rbp->qwFFFFFFE8 << rbp->b000C;
        else if (rbp->dwFFFFFFF4 >= ~0x33)
        {
            word32 eax_57 = 0x00 - rbp->dwFFFFFFF4;
            rbp->qwFFFFFFE0 = rbp->qwFFFFFFE8;
            rax_50 = rbp->qwFFFFFFE0 >> (byte) eax_57;
        }
        else
            rax_50 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_50;
}


uint64 fn0000000000402D40(struct Eq_2608 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->qw0010 = (word64) xmm0;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    uint64 rax_50;
    if (rbp->qwFFFFFFF8 == 0x00)
        rax_50 = 0x00;
    else
    {
        rbp->dwFFFFFFF4 = (rbp->dwFFFFFFFC >> 0x14 & 0x07FF) - 0x0433;
        rbp->qwFFFFFFE8 = rbp->qwFFFFFFF8 & 0xFFFFFFFFFFFFF | 0x10000000000000;
        if (rbp->dwFFFFFFF4 >= 0x0C)
            rax_50 = ~0x00;
        else if (rbp->dwFFFFFFF4 >= 0x00)
            rax_50 = rbp->qwFFFFFFE8 << rbp->b000C;
        else if (rbp->dwFFFFFFF4 >= ~0x33)
        {
            word32 eax_57 = 0x00 - rbp->dwFFFFFFF4;
            rbp->qwFFFFFFE0 = rbp->qwFFFFFFE8;
            rax_50 = rbp->qwFFFFFFE0 >> (byte) eax_57;
        }
        else
            rax_50 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_50;
}


uint64 fn0000000000402D40(struct Eq_2608 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->qw0010 = (word64) xmm0;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    uint64 rax_50;
    if (rbp->qwFFFFFFF8 == 0x00)
        rax_50 = 0x00;
    else
    {
        rbp->dwFFFFFFF4 = (rbp->dwFFFFFFFC >> 0x14 & 0x07FF) - 0x0433;
        rbp->qwFFFFFFE8 = rbp->qwFFFFFFF8 & 0xFFFFFFFFFFFFF | 0x10000000000000;
        if (rbp->dwFFFFFFF4 >= 0x0C)
            rax_50 = ~0x00;
        else if (rbp->dwFFFFFFF4 >= 0x00)
            rax_50 = rbp->qwFFFFFFE8 << rbp->b000C;
        else if (rbp->dwFFFFFFF4 >= ~0x33)
        {
            word32 eax_57 = 0x00 - rbp->dwFFFFFFF4;
            rbp->qwFFFFFFE0 = rbp->qwFFFFFFE8;
            rax_50 = rbp->qwFFFFFFE0 >> (byte) eax_57;
        }
        else
            rax_50 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_50;
}


uint64 fn0000000000402D40(struct Eq_2608 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->qw0010 = (word64) xmm0;
    rbp->qwFFFFFFF8 = rbp->qw0010;
    uint64 rax_50;
    if (rbp->qwFFFFFFF8 == 0x00)
        rax_50 = 0x00;
    else
    {
        rbp->dwFFFFFFF4 = (rbp->dwFFFFFFFC >> 0x14 & 0x07FF) - 0x0433;
        rbp->qwFFFFFFE8 = rbp->qwFFFFFFF8 & 0xFFFFFFFFFFFFF | 0x10000000000000;
        if (rbp->dwFFFFFFF4 >= 0x0C)
            rax_50 = ~0x00;
        else if (rbp->dwFFFFFFF4 >= 0x00)
            rax_50 = rbp->qwFFFFFFE8 << rbp->b000C;
        else if (rbp->dwFFFFFFF4 >= ~0x33)
        {
            word32 eax_57 = 0x00 - rbp->dwFFFFFFF4;
            rbp->qwFFFFFFE0 = rbp->qwFFFFFFE8;
            rax_50 = rbp->qwFFFFFFE0 >> (byte) eax_57;
        }
        else
            rax_50 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_50;
}


void fn0000000000402E2F(struct Eq_2599 * rbp, word128 xmm0)
{
    rbp->r0010 = (word64) xmm0;
    word128 xmm0_7 = (word128) g_qw404688;
    word128 xmm1_8 = (word128) rbp->r0010;
    uint32 eax_17 = 0x00;
    if (!PARITY_EVEN((real64) xmm1_8 - (real64) xmm0_7))
        eax_17 = (uint32) ((real64) xmm1_8 >= (real64) xmm0_7);
    rbp->dwFFFFFFF4 = eax_17;
    word128 xmm0_28;
    if (eax_17 != 0x00)
        xmm0_28 = (word128) rbp->r0010;
    else
        xmm0_28 = SEQ(0x00, g_r404690 - rbp->r0010);
    struct Eq_2749 * rbp_36;
    rbp_36->qwFFFFFFF8 = fn0000000000402D35(rbp, xmm0_28, out rbp_36);
    rbp_36->dwFFFFFFF4 == 0x00;
}


word64 fn0000000000402EB8(struct Eq_2761 * rbp, word128 xmm0, word64 & rbpOut)
{
    word64 rbp_11;
    Eq_2763 tLoc08;
    tLoc08.ptr0000 = rbp;
    word64 rax_10 = fn0000000000402EC3(&tLoc08, xmm0, out rbp_11);
    rbpOut = rbp_11;
    return rax_10;
}


uint64 fn0000000000402EC3(struct Eq_2770 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->qw0010 = (word64) xmm0;
    rbp->qwFFFFFFF0 = rbp->qw0010;
    uint64 rax_45;
    if (rbp->qwFFFFFFF0 == 0x00 && rbp->wFFFFFFF8 == 0x00)
        rax_45 = 0x00;
    else
    {
        rbp->dwFFFFFFEC = ((word32) rbp->wFFFFFFF8 & 0x7FFF) - 16446;
        rbp->qwFFFFFFE0 = rbp->qwFFFFFFF0;
        if (rbp->dwFFFFFFEC > 0x00)
            rax_45 = ~0x00;
        else if (rbp->dwFFFFFFEC >= ~0x3E)
        {
            word32 eax_52 = 0x00 - rbp->dwFFFFFFEC;
            rbp->qwFFFFFFD8 = rbp->qwFFFFFFE0;
            rax_45 = rbp->qwFFFFFFD8 >> (byte) eax_52;
        }
        else
            rax_45 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_45;
}


uint64 fn0000000000402EC3(struct Eq_2770 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->qw0010 = (word64) xmm0;
    rbp->qwFFFFFFF0 = rbp->qw0010;
    uint64 rax_45;
    if (rbp->qwFFFFFFF0 == 0x00 && rbp->wFFFFFFF8 == 0x00)
        rax_45 = 0x00;
    else
    {
        rbp->dwFFFFFFEC = ((word32) rbp->wFFFFFFF8 & 0x7FFF) - 16446;
        rbp->qwFFFFFFE0 = rbp->qwFFFFFFF0;
        if (rbp->dwFFFFFFEC > 0x00)
            rax_45 = ~0x00;
        else if (rbp->dwFFFFFFEC >= ~0x3E)
        {
            word32 eax_52 = 0x00 - rbp->dwFFFFFFEC;
            rbp->qwFFFFFFD8 = rbp->qwFFFFFFE0;
            rax_45 = rbp->qwFFFFFFD8 >> (byte) eax_52;
        }
        else
            rax_45 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_45;
}


uint64 fn0000000000402EC3(struct Eq_2770 * rbp, word128 xmm0, word64 & rbpOut)
{
    rbp->qw0010 = (word64) xmm0;
    rbp->qwFFFFFFF0 = rbp->qw0010;
    uint64 rax_45;
    if (rbp->qwFFFFFFF0 == 0x00 && rbp->wFFFFFFF8 == 0x00)
        rax_45 = 0x00;
    else
    {
        rbp->dwFFFFFFEC = ((word32) rbp->wFFFFFFF8 & 0x7FFF) - 16446;
        rbp->qwFFFFFFE0 = rbp->qwFFFFFFF0;
        if (rbp->dwFFFFFFEC > 0x00)
            rax_45 = ~0x00;
        else if (rbp->dwFFFFFFEC >= ~0x3E)
        {
            word32 eax_52 = 0x00 - rbp->dwFFFFFFEC;
            rbp->qwFFFFFFD8 = rbp->qwFFFFFFE0;
            rax_45 = rbp->qwFFFFFFD8 >> (byte) eax_52;
        }
        else
            rax_45 = 0x00;
    }
    rbpOut = rbp->qw0000;
    return rax_45;
}


void fn0000000000402F83(struct Eq_2761 * rbp, word128 xmm0)
{
    rbp->r0010 = (word64) xmm0;
    word128 xmm0_7 = (word128) g_qw404698;
    word128 xmm1_8 = (word128) rbp->r0010;
    uint32 eax_17 = 0x00;
    if (!PARITY_EVEN((real64) xmm1_8 - (real64) xmm0_7))
        eax_17 = (uint32) ((real64) xmm1_8 >= (real64) xmm0_7);
    rbp->dwFFFFFFF4 = eax_17;
    word128 xmm0_28;
    if (eax_17 != 0x00)
        xmm0_28 = (word128) rbp->r0010;
    else
        xmm0_28 = SEQ(0x00, g_r4046A0 - rbp->r0010);
    struct Eq_2899 * rbp_36;
    rbp_36->qwFFFFFFF8 = fn0000000000402EB8(rbp, xmm0_28, out rbp_36);
    rbp_36->dwFFFFFFF4 == 0x00;
}


Eq_2910 Win32CrtStartup()
{
    ptr64 fp;
    fn000000000040301B(fp - 8);
}


void fn000000000040301B(struct Eq_346 * rbp)
{
    rbp->dwFFFFFFFC = 0x00;
    __set_app_type(1);
    _controlfp(0x00010000, 0x00030000);
    rbp->ptrFFFFFFF0 = _argc;
    __getmainargs(rbp->ptrFFFFFFF0, _argv, environ, g_dw404990);
    rbp->ptrFFFFFFE8 = _argc;
    word64 rbp_68;
    exit(fn00000000004013F0((uint64) *rbp->ptrFFFFFFE8, *_argv, rbp, out rbp_68));
}


void fn00000000004030EB(Eq_2981 rcx, word64 rdx, struct Eq_346 * rbp)
{
    rbp->t0010.u0 = (word64) rcx;
    rbp->qw0018 = rdx;
    _argc->u1 = rbp->t0010.u1;
    *_argv = rbp->qw0018;
    _controlfp(0x00010000, 0x00030000);
    rbp->ptrFFFFFFF8 = _argc;
    word64 rbp_56;
    fn00000000004013F0((uint64) *rbp->ptrFFFFFFF8, *_argv, rbp, out rbp_56);
}


<anonymous> * <unnamed> = &g_t4893;

<anonymous> * <unnamed> = &g_t489C;

<anonymous> * <unnamed> = &g_t48A5;

<anonymous> * <unnamed> = &g_t48AE;

<anonymous> * <unnamed> = &g_t48B7;

<anonymous> * <unnamed> = &g_t48C0;

<anonymous> * <unnamed> = &g_t48CD;

<anonymous> * <unnamed> = &g_t48D7;

<anonymous> * <unnamed> = &g_t48DF;

<anonymous> * <unnamed> = &g_t48E7;

<anonymous> * <unnamed> = &g_t48F0;

<anonymous> * <unnamed> = &g_t48F9;

<anonymous> * <unnamed> = &g_t4900;

<anonymous> * <unnamed> = &g_t4908;

<anonymous> * <unnamed> = &g_t4910;

<anonymous> * <unnamed> = &g_t4919;

<anonymous> * <unnamed> = &g_t4923;

<anonymous> * <unnamed> = &g_t492C;

<anonymous> * <unnamed> = &g_t4934;

<anonymous> * <unnamed> = &g_t493D;

<anonymous> * <unnamed> = &g_t494E;

<anonymous> * <unnamed> = &g_t495B;

<anonymous> * <unnamed> = &g_t4964;

<anonymous> * <unnamed> = &g_t496D;

<anonymous> * <unnamed> = &g_t4978;

<anonymous> * <unnamed> = &g_t4988;

word64 <unnamed> = 0x4893;

word64 <unnamed> = 18588;

word64 <unnamed> = 0x48A5;

word64 <unnamed> = 18606;

word64 <unnamed> = 18615;

word64 <unnamed> = 0x48C0;

word64 <unnamed> = 0x48CD;

word64 <unnamed> = 0x48D7;

word64 <unnamed> = 18655;

word64 <unnamed> = 18663;

word64 <unnamed> = 0x48F0;

word64 <unnamed> = 18681;

word64 <unnamed> = 0x4900;

word64 <unnamed> = 0x4908;

word64 <unnamed> = 0x4910;

word64 <unnamed> = 0x4919;

word64 <unnamed> = 0x4923;

word64 <unnamed> = 0x492C;

word64 <unnamed> = 0x4934;

word64 <unnamed> = 0x493D;

word64 <unnamed> = 0x494E;

word64 <unnamed> = 18779;

word64 <unnamed> = 18788;

word64 <unnamed> = 18797;

word64 <unnamed> = 18808;

word64 <unnamed> = 0x4988;
