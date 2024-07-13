#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f webPrivate.sh -o webPrivate 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[3]))
	"\275\066\257\240\321\166\325\026\344\336\037\022\373\051\242\134"
	"\107\171\231\032\163\016\312\363\101\307\327\350\155\061"
#define      shll_z	10
#define      shll	((&data[30]))
	"\105\330\011\356\360\336\165\257\133\041\032"
#define      rlax_z	1
#define      rlax	((&data[41]))
	"\365"
#define      msg1_z	65
#define      msg1	((&data[51]))
	"\166\314\152\274\330\065\074\113\062\062\265\021\371\366\175\360"
	"\054\210\206\216\257\316\166\136\230\154\101\307\356\202\322\147"
	"\000\101\140\371\105\343\320\056\347\360\227\053\100\345\145\342"
	"\211\246\155\021\345\171\346\026\012\110\372\223\261\374\006\255"
	"\162\335\220\155\062\071\122\212\156\322\250\317\264\227"
#define      chk1_z	22
#define      chk1	((&data[125]))
	"\123\302\057\301\363\257\071\157\125\026\047\015\334\007\111\007"
	"\312\342\171\201\137\367\214\104\116\272\360\154"
#define      tst2_z	19
#define      tst2	((&data[149]))
	"\225\037\020\322\302\005\123\027\122\001\371\124\100\067\003\026"
	"\136\233\370\214\010\032"
#define      msg2_z	19
#define      msg2	((&data[173]))
	"\037\152\305\037\105\221\060\217\013\365\330\107\334\000\314\152"
	"\346\321\150\107\120\005\333"
#define      inlo_z	3
#define      inlo	((&data[193]))
	"\233\365\162"
#define      opts_z	1
#define      opts	((&data[196]))
	"\343"
#define      xecc_z	15
#define      xecc	((&data[200]))
	"\351\313\236\310\325\216\042\306\050\330\220\360\307\152\222\046"
	"\177\371\075"
#define      text_z	1165
#define      text	((&data[450]))
	"\202\072\336\323\301\163\333\333\034\172\066\073\344\373\027\047"
	"\366\057\265\042\360\022\003\111\374\317\350\071\135\265\070\337"
	"\360\027\263\262\213\217\216\247\011\304\343\356\300\373\025\266"
	"\053\312\331\034\334\335\145\330\254\115\022\012\003\113\352\363"
	"\142\235\246\355\054\064\225\066\371\171\044\272\164\072\161\237"
	"\004\112\273\341\050\040\272\324\155\314\337\161\030\311\145\172"
	"\146\013\147\223\077\374\311\071\165\356\363\352\050\144\211\055"
	"\257\105\017\327\146\311\254\324\226\213\105\256\124\252\050\273"
	"\265\220\116\365\214\030\057\002\007\042\354\060\207\166\135\066"
	"\273\154\016\041\066\272\365\314\106\073\173\232\345\244\126\232"
	"\064\244\220\301\275\277\304\305\342\260\365\151\047\123\237\343"
	"\300\256\004\366\150\372\303\256\065\076\111\033\343\237\266\027"
	"\104\106\330\002\006\234\307\350\115\275\122\165\020\361\130\320"
	"\240\135\307\010\127\212\267\215\311\001\250\254\240\136\304\345"
	"\245\235\347\254\072\257\224\210\154\346\330\053\242\314\314\271"
	"\253\034\244\224\305\035\206\270\160\222\317\007\150\351\122\323"
	"\305\076\262\173\351\030\313\017\270\220\173\363\163\115\101\162"
	"\332\115\054\072\226\045\237\243\375\376\253\073\071\165\210\256"
	"\333\300\272\134\371\244\130\067\167\042\306\122\213\366\227\146"
	"\377\104\223\016\121\357\013\227\323\306\034\301\171\261\301\042"
	"\200\066\071\054\221\055\030\343\142\244\175\107\121\032\021\222"
	"\167\000\131\353\037\326\305\250\246\164\004\225\165\376\242\235"
	"\026\345\020\330\245\011\343\263\177\316\035\274\121\226\126\256"
	"\115\122\251\372\003\301\231\147\040\221\273\106\342\156\217\274"
	"\025\220\222\122\024\342\202\022\377\003\236\172\316\130\213\100"
	"\347\267\057\363\046\234\127\215\303\137\266\331\272\067\233\207"
	"\151\076\076\055\172\014\073\344\225\317\074\306\324\161\213\147"
	"\363\030\322\137\050\164\261\355\344\046\316\275\370\337\024\014"
	"\010\254\076\150\234\062\211\367\206\005\247\141\126\376\350\005"
	"\333\152\106\105\256\201\240\043\366\063\126\067\065\154\032\015"
	"\245\161\000\070\372\356\377\204\350\357\101\342\104\052\332\177"
	"\235\275\311\320\132\237\154\310\232\340\340\037\014\266\344\041"
	"\152\152\343\041\361\106\023\067\363\151\332\211\266\114\167\244"
	"\036\310\367\060\300\235\334\323\254\060\026\073\357\033\140\312"
	"\315\354\065\017\050\355\213\356\100\366\012\267\151\164\124\220"
	"\216\026\155\036\370\120\210\264\104\264\017\205\313\371\161\023"
	"\144\165\133\340\104\034\001\162\253\311\324\053\161\244\044\042"
	"\244\370\357\071\004\003\324\015\154\251\250\365\070\360\335\137"
	"\315\002\326\252\063\214\170\041\170\256\224\276\264\125\140\146"
	"\252\047\274\222\355\365\112\224\072\116\015\210\362\302\332\302"
	"\135\150\072\331\356\371\346\365\230\040\226\015\333\336\140\160"
	"\224\352\331\336\301\206\055\172\205\063\236\367\103\103\354\207"
	"\335\256\306\252\235\163\316\254\035\375\171\033\110\207\344\370"
	"\050\023\312\167\277\116\311\377\217\257\076\227\055\051\176\215"
	"\211\226\101\313\131\044\037\153\130\344\366\123\277\001\024\217"
	"\023\145\036\330\314\021\303\061\156\367\275\351\130\266\315\024"
	"\372\053\035\326\333\112\121\067\272\105\177\213\153\135\123\031"
	"\130\244\063\106\214\221\332\057\342\333\133\040\323\206\217\367"
	"\330\061\231\177\343\010\047\005\377\016\102\241\037\155\237\214"
	"\226\321\200\074\320\051\161\107\255\143\201\242\224\323\355\131"
	"\207\104\033\141\214\312\102\122\067\226\235\366\345\324\023\370"
	"\344\022\346\245\077\230\121\347\017\261\324\345\305\162\236\354"
	"\232\013\363\201\364\056\244\162\136\327\360\174\067\070\107\375"
	"\275\015\255\141\344\050\157\343\327\071\177\272\023\335\256\044"
	"\364\355\270\215\376\304\312\315\020\062\302\076\104\303\310\213"
	"\203\224\334\331\062\123\123\252\061\226\101\374\155\133\321\164"
	"\036\142\347\007\153\214\066\146\261\222\022\365\202\003\240\062"
	"\236\304\017\070\135\077\001\155\025\035\352\043\142\314\372\300"
	"\026\150\266\323\326\061\065\347\031\161\327\023\365\145\263\214"
	"\000\224\141\042\102\043\156\102\242\200\263\114\375\010\274\301"
	"\025\267\234\156\007\342\211\147\304\264\051\204\224\305\076\154"
	"\247\127\104\032\031\267\351\131\034\103\157\277\232\220\223\372"
	"\106\012\304\030\041\371\211\172\117\205\224\225\373\144\135\377"
	"\017\125\075\137\025\070\262\275\333\272\061\003\031\005\312\222"
	"\010\140\257\372\070\026\055\162\150\214\232\203\004\251\044\076"
	"\157\056\032\166\032\012\213\271\000\030\074\125\377\255\121\341"
	"\206\063\131\016\225\115\157\104\300\251\310\371\201\136\327\336"
	"\277\047\372\235\343\245\371\336\051\143\366\261\233\040\340\345"
	"\144\365\145\156\215\266\371\010\161\216\245\014\317\144\315\313"
	"\000\141\077\210\361\102\260\040\360\336\177\127\200\033\103\123"
	"\176\033\154\202\375\103\067\361\365\260\167\154\364\370\312\272"
	"\327\111\367\022\347\313\107\112\261\310\172\234\241\160\052\221"
	"\050\142\306\064\155\116\111\202\040\001\344\315\342\257\351\115"
	"\015\220\213\143\210\144\311\103\163\326\341\300\041\100\117\150"
	"\202\014\235\126\040\063\244\226\031\026\265\363\133\031\176\275"
	"\212\026\373\243\346\347\134\360\032\120\121\256\104\054\303\164"
	"\206\020\167\143\070\175\020\024\124\076\006\054\240\360\012\020"
	"\366\170\033\172\074\234\172\257\251\145\001\333\242\077\263\064"
	"\301\037\366\021\214\324\240\107\314\226\343\274\244\062\175\335"
	"\020\007\116\267\343\212\274\167\015\102\045\347\046\060\306\267"
	"\174\257\377\056\124\214\052\253\245\130\335\276\213\223\363\201"
	"\032\314\224\355\003\017\066\370\043\071\203\067\232\017\035\272"
	"\367\061\165\234\256\355\336\367\366\351\245\233\032\214\130\370"
	"\370\126\264\244\357\272\023\271\045\377\347\114\005\230\274\313"
	"\255\006\132\020\113\051\206\275\157\243\075\246\226\263\311\202"
	"\000\151\007\354\112\313\240\375\266\251\134\166\207\046\102\363"
	"\144\116\010\164\244\215\150\331\252\323\002\367\162\201\153\375"
	"\225\300\067\257\345\141\022\375\175\330\125\116\170\262\025\201"
	"\012\240\071\230\152\072\101\027\332\240\333\300\105\171\250\361"
	"\263\127\206\074\304\155\071\102\105\217\220\276\102\246\100\115"
	"\106\171\345\261\263\047\310\216\307\244\116\015\035\366\377\321"
	"\116\205\015\023\362\107\125\070\327\346\367\031\214\067\147\323"
	"\261\115\204\144\164\114\363\073\361\101\110\016\070\107\340\207"
	"\315\355\232\300\065\360\371\014\326\360\046\143\050\215\066\331"
	"\332\273\076\117\010\061\212\371\162\323\007\253\033\347\063\351"
	"\325\315\251\012\276\242\027\225\223\075\370\273\313\057\225\246"
	"\352\323\365\362\004\200\353\167\123\363\043\157\332\126\130\260"
	"\044\002\272\342\244\322\167\070\020\160\364\333\237\211\201\211"
	"\134\166\173\141\366\146\330\112\132\373\272\064\121\022\345\165"
	"\025\240\130\271\162\320\362\202\100\346\135\337\157\337\150\314"
	"\126\344\056\114\113\006\227\245\002\121\332\124\144\277\312\171"
	"\137\042\063\321\362\046\124\063\014\261\022\174\221\173\111\347"
	"\137\167\064\252\175\313\117\200\035\052\324\202\351\236\374\110"
	"\300\060\032\263\126\156\346\142\040\371\337\261\164\050\230\324"
	"\240\315\176\036\230\316\236\266\370\162\070\342\020\064\053\321"
	"\144\105\205\273\264\154\035\324\145"
#define      chk2_z	19
#define      chk2	((&data[1907]))
	"\045\037\204\010\100\345\204\200\064\251\002\060\212\362\134\173"
	"\210\131\206\223\242\256\306\354\055"
#define      pswd_z	256
#define      pswd	((&data[1963]))
	"\202\073\365\364\164\327\005\251\002\327\015\110\134\311\374\311"
	"\346\321\057\344\127\011\012\167\267\320\143\345\264\351\341\066"
	"\044\345\360\370\033\023\241\201\213\112\130\033\217\162\372\047"
	"\227\375\075\071\170\211\131\355\140\373\267\317\135\065\136\370"
	"\033\116\360\066\142\222\270\355\334\020\011\154\203\003\223\032"
	"\001\321\124\171\132\256\147\273\252\036\212\010\124\351\000\157"
	"\067\361\245\231\203\136\207\140\156\220\314\361\224\137\014\225"
	"\061\141\017\213\017\166\106\272\225\321\302\352\272\303\132\362"
	"\264\377\213\067\136\023\230\314\243\144\276\070\304\313\316\366"
	"\054\335\201\074\124\310\367\352\232\271\324\125\175\056\107\061"
	"\056\322\151\214\345\002\130\211\146\027\302\053\342\220\041\017"
	"\156\243\113\302\154\102\254\006\374\201\133\171\257\242\253\336"
	"\165\025\152\133\027\303\345\175\333\247\251\275\070\313\314\246"
	"\156\030\151\332\133\026\341\130\227\075\321\107\337\175\045\125"
	"\222\220\261\251\123\227\047\056\076\321\354\166\234\271\035\012"
	"\321\206\345\055\234\307\205\064\004\127\173\344\324\241\071\147"
	"\061\353\021\205\202\070\264\301\011\240\070\246\132\125\261\053"
	"\334\226\131\171\136\337\255\142\066\051\106\013\312\200\163\374"
	"\153\326\053\230\255\061\101\260\011\117\370\145\030\365\057\377"
	"\306\136\344\036\147\356\226\037\276\372\004\163\343\346\252\010"
	"\274\325\240\152\007\342\033\020\062\024\166\113\011\245\113\320"
	"\004\057\356\153\035\204\213\334\177\220\117\142\166\371\152\063"
	"\317"
#define      date_z	1
#define      date	((&data[2283]))
	"\207"
#define      lsto_z	1
#define      lsto	((&data[2284]))
	"\245"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
