//
// Created by aldo on 03/05/22.
//

#include "Solver.h"

using namespace Minisat;


bool Solver::solve(const vec<Lit>& assumps){
    std::cout << "solve funzionaAaAaA" << std::endl;
    return Legacy::Solver::solve(assumps);
}

lbool Solver::solveLimited(const vec<Lit>& assumps){
    std::cout << "solveLimited funzionaAaAaA" << std::endl;
    return Legacy::Solver::solveLimited(assumps);
}