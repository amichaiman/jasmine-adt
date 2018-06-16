//
// Created by amichai on 16/06/18.
//

#ifndef UNTITLED16_JOBINQUIRYADT_H
#define UNTITLED16_JOBINQUIRYADT_H

#include <malloc.h>

typedef struct {
    char *companyName;
    char *position;
    double salary;
    int numberOfJobsWanted;
}Inquiry;

Inquiry* jobInquiryCreate();
void jobInquiryGetHotJob(FILE *database);
void jobInquirySetNumber(Inquiry *inquiry, int number);
void jobInquirySetPosition(Inquiry *inquiry, char *position);
void jobInquirySetSalary(Inquiry *inquiry, double salary);
void jobInquirySetCompany(Inquiry *inquiry, char *company);
void jobInquiryPrintAndDestroy(FILE *database, Inquiry *inquiry);
void jobInquiryDestroy(Inquiry *inquiry);

#endif //UNTITLED16_JOBINQUIRYADT_H
