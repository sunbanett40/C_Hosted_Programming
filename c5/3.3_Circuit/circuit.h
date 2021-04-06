/*
 *         File: circuit.h
 *       Author: Steve Gunn
 *      License: MIT License
 *         Date: 27th October 2018
 *  Description: Data structures and interfaces for modified nodal analysis of a circuit containing 
 *               voltage sources, current sources and resistors.
 */

#ifndef _CIRCUIT_H
#define _CIRCUIT_H

#include "vector.h"
#include "matrix.h"

/* Data Structures */

typedef enum {
/* TODO */
resistor,
voltage,
current
} CompType;

typedef struct {
/* TODO */
CompType type;
char name [32];
unsigned int n1;
unsigned int n2;
double value;

} Component;

typedef struct {
/* TODO */
int nV;
int nI;
int nR;
int nN;
int nC;
Component* comp;
} Circuit;

/* Interfaces */

Circuit createCircuitFromFile(const char *filename);
void destroyCircuit(Circuit c);
void analyseCircuit(const Circuit c);
Vector solveLinearSystem(Matrix A, Vector b);

#endif
