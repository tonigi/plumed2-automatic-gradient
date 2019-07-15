/******************************************************************************
 *                       Code generated with sympy 1.0                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'plumed_curvature'                   *
 ******************************************************************************/
#include "curvature_codegen.h"
#include <math.h>

double curvature_radius(double r_1x, double r_1y, double r_1z, double r_2x, double r_2y, double r_2z, double r_3x, double r_3y, double r_3z) {

   double curvature_radius_result;
   curvature_radius_result = (1.0L/2.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1));
   return curvature_radius_result;

}

void curvature_radius_grad(double r_1x, double r_1y, double r_1z, double r_2x, double r_2y, double r_2z, double r_3x, double r_3y, double r_3z, double *g1, double *g2, double *g3) {

   g1[0] = (1.0L/2.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((1.0L/2.0L)*(2*r_1x - 2*r_3x)/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1) + (1.0L/2.0L)*((-2*r_1x + 2*r_2x)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/(pow(pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2), 2)*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (2*r_2x - 2*r_3x)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))))*(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/pow(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1, 2))*(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1)/(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2));
   g1[1] = (1.0L/2.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((1.0L/2.0L)*(2*r_1y - 2*r_3y)/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1) + (1.0L/2.0L)*((-2*r_1y + 2*r_2y)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/(pow(pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2), 2)*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (2*r_2y - 2*r_3y)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))))*(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/pow(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1, 2))*(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1)/(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2));
   g1[2] = (1.0L/2.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((1.0L/2.0L)*(2*r_1z - 2*r_3z)/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1) + (1.0L/2.0L)*((-2*r_1z + 2*r_2z)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/(pow(pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2), 2)*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (2*r_2z - 2*r_3z)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))))*(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/pow(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1, 2))*(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1)/(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2));
   g2[0] = (1.0L/4.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((2*r_1x - 2*r_2x)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/(pow(pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2), 2)*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (-2*r_2x + 2*r_3x)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*pow(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2), 2)) + (2*r_1x - 4*r_2x + 2*r_3x)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1);
   g2[1] = (1.0L/4.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((2*r_1y - 2*r_2y)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/(pow(pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2), 2)*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (-2*r_2y + 2*r_3y)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*pow(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2), 2)) + (2*r_1y - 4*r_2y + 2*r_3y)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1);
   g2[2] = (1.0L/4.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((2*r_1z - 2*r_2z)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/(pow(pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2), 2)*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (-2*r_2z + 2*r_3z)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*pow(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2), 2)) + (2*r_1z - 4*r_2z + 2*r_3z)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1);
   g3[0] = (1.0L/2.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((1.0L/2.0L)*(-2*r_1x + 2*r_3x)/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1) + (1.0L/2.0L)*((-2*r_1x + 2*r_2x)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (2*r_2x - 2*r_3x)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*pow(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2), 2)))*(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/pow(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1, 2))*(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1)/(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2));
   g3[1] = (1.0L/2.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((1.0L/2.0L)*(-2*r_1y + 2*r_3y)/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1) + (1.0L/2.0L)*((-2*r_1y + 2*r_2y)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (2*r_2y - 2*r_3y)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*pow(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2), 2)))*(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/pow(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1, 2))*(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1)/(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2));
   g3[2] = (1.0L/2.0L)*sqrt((pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1))*((1.0L/2.0L)*(-2*r_1z + 2*r_3z)/(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1) + (1.0L/2.0L)*((-2*r_1z + 2*r_2z)*((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z))/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + (2*r_2z - 2*r_3z)*pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*pow(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2), 2)))*(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2))/pow(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1, 2))*(-pow((r_1x - r_2x)*(r_2x - r_3x) + (r_1y - r_2y)*(r_2y - r_3y) + (r_1z - r_2z)*(r_2z - r_3z), 2)/((pow(r_1x - r_2x, 2) + pow(r_1y - r_2y, 2) + pow(r_1z - r_2z, 2))*(pow(r_2x - r_3x, 2) + pow(r_2y - r_3y, 2) + pow(r_2z - r_3z, 2))) + 1)/(pow(r_1x - r_3x, 2) + pow(r_1y - r_3y, 2) + pow(r_1z - r_3z, 2));

}