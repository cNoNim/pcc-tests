#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=
LOG=jira.log

REGRESS_TARGETS =	PCC-21 PCC-23 PCC-33 PCC-45 PCC-47 \
			PCC-62 PCC-63 PCC-65 PCC-68 PCC-69 PCC-70 PCC-77 \
			PCC-84 PCC-85 PCC-97 PCC-101 PCC-123 PCC-125 \
			PCC-129 PCC-131 PCC-135 PCC-138 PCC-149 PCC-152 \
			PCC-154 PCC-155 PCC-157 PCC-158 PCC-159 \
			PCC-160 PCC-165 PCC-169 PCC-170 PCC-176 PCC-179 \
			PCC-180 PCC-182 PCC-183 PCC-185 PCC-187 PCC-189 \
			PCC-190 PCC-191 PCC-192 PCC-193 PCC-195 PCC-196 \
			PCC-197 PCC-200 PCC-201 PCC-202 PCC-203 PCC-204 \
			PCC-206 PCC-207 PCC-208 PCC-210 PCC-214 PCC-215 \
			PCC-216 PCC-218 PCC-219 PCC-220 PCC-222 PCC-223 \
			PCC-224 PCC-225 PCC-226 PCC-227 PCC-228 PCC-232 \
			PCC-234 PCC-236 PCC-237 PCC-238 PCC-239 PCC-240 \
			PCC-241 PCC-242 PCC-243 PCC-244 PCC-245 PCC-247 \
			PCC-248 PCC-251 \
			PCC-376 PCC-377 PCC-378 \
			PCC-380 PCC-382 PCC-383 PCC-385 \
			PCC-460 PCC-461 PCC-462 PCC-464 \
			PCC-476 PCC-476-1 PCC-477

REGRESS_O2_TARGETS =	PCC-177 PCC-178 PCC-184 PCC-194 PCC-250 PCC-256

REGRESS_PIC_TARGETS =	PCC-186 PCC-249

REGRESS_E_C_TARGETS =	PCC-211

REGRESS_E_CC_TARGETS =	PCC-255

REGRESS_TARGETS_FAIL =	PCC-161 PCC-221

# compile-time calculations is not a requirement in c99.
IGNORE = PCC-57

test:  
	@echo " Running tests from jira bug tracker : "  
	@for TARGET in ${REGRESS_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null 1>&2 && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET in ${REGRESS_O2_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out -O2 $$TARGET.c 2>/dev/null 1>&2 && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET in ${REGRESS_PIC_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out -k $$TARGET.c 2>/dev/null 1>&2 && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET in ${REGRESS_E_C_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out -E -C $$TARGET.c 2>/dev/null 1>&2 && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET in ${REGRESS_E_CC_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out -E -Wp,-CC $$TARGET.c 2>/dev/null 1>&2 && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET in ${REGRESS_TARGETS_FAIL} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null 1>&2 && \
			echo "failed" || echo "passed" ;\
	done 



page:
	@printf  "<h2> jira bug tracker tests </h2> \n" > ${LOG}
	@printf  "<table width="300"> \n<tr><th>Test</th><th>Result</th></tr> \n" >> ${LOG}
	@for TARGET in ${REGRESS_TARGETS} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " $$TARGET " >> ${LOG} ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;\
	done
	@for TARGET in ${REGRESS_O2_TARGETS} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " $$TARGET " >> ${LOG} ;\
		${CC} ${CFLAGS} -o $$TARGET.out -O2 $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;\
	done
	@for TARGET in ${REGRESS_PIC_TARGETS} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " $$TARGET " >> ${LOG} ;\
		${CC} ${CFLAGS} -o $$TARGET.out -k $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;\
	done
	@for TARGET in ${REGRESS_E_C_TARGETS} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " $$TARGET " >> ${LOG} ;\
		${CC} ${CFLAGS} -o $$TARGET.out -E -C $$TARGET.c 2>/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;\
	done
	@for TARGET in ${REGRESS_TARGETS_FAIL} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "$$TARGET" >> ${LOG} ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} ;\
	done



clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf ${LOG}

