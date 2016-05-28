PURPOSE: Implement System call and test bad code.

FILES: Makefile, crashtest.c, Documentation.pdf,syscall_64.tbl, syscalls.h, test.c, SysCallxtime.c, xtime.c

COMPILE THE CODE: gcc test.c,  gcc xtime.c

RUN THE CODE: ./a.out

SOFTWARE REQUIREMENT: gcc version 4.7.2 (Debian 4.7.2-5)

CODE REFERENCE:

	1. https://www.kernel.org
		
	2. http://www.csee.umbc.edu/courses/undergraduate/CMSC421/fall02/burt/projects/howto_add_systemcall.html
	
	3. http://www.linuxjournal.com/article/3326
	
	4. https://arvindsraj.wordpress.com/2012/10/05/adding-hello-world-system-call-to-linux/

	5. http://stackoverflow.com/questions/1716200/writing-a-system-calls-for-linux
	
	6. http://www.tldp.org/HOWTO/html_single/Implement-Sys-Call-Linux-2.6-i386/
	
	7. https://en.wikipedia.org/wiki/Kernel_panic

	8. https://en.wikipedia.org/wiki/Linux_kernel_oops

	9. https://www.kernel.org/pub/linux/kernel/people/akpm/patches/2.5/2.5.66/2.5.66-mm3/broken-out/panic-on-oops.patch

	10.http://stackoverflow.com/questions/5085136/how-to-test-the-kernel-for-kernel-panics

	11.http://opensourceforu.efytimes.com/2011/02/debug-kernel-panics-with-crash/

	12.http://www.dedoimedo.com/computers/crash-analyze.html

	13.http://unix.stackexchange.com/questions/66197/how-to-cause-kernel-panic-with-a-single-command

	14.http://www.cyberciti.biz/faq/understanding-bash-fork-bomb/

	15.https://en.wikipedia.org/wiki/Fork_bomb

	16.https://linuxconfig.org/how-to-crash-your-linux-system-with-fork-bomb

	17. http://stackoverflow.com/questions/4007268/what-exactly-is-meant-by-de-referencing-a-null-pointer

	18.http://stackoverflow.com/questions/12645647/what-happens-in-os-when-we-dereference-a-null-pointer-in-c

	19.https://www.quora.com/What-actually-happens-when-dereferencing-a-NULL-pointer
	
	20.http://www.ibm.com/developerworks/library/l-kernel-memory-access/

	21.http://stackoverflow.com/questions/3756323/getting-the-current-time-in-milliseconds

	22.http://stackoverflow.com/questions/13760278/where-is-copy-to-user-defined

	23.https://xorl.wordpress.com/2010/10/25/linux-kernel-user-to-kernel-space-range-checks/

	24.http://stackoverflow.com/questions/12357752/what-is-the-point-of-using-the-linux-macro-access-ok

	25.http://www.ibm.com/developerworks/library/l-kernel-memory-access/

	26.http://oslab.info/index.php/Class/Slides

	27.http://cs.binghamton.edu/~kartik/cs550/slides/system_call_extra_slides.pdf

	28.http://cs.binghamton.edu/~kartik/cs550/hw2.html

EXTRA CREDIT: N/A