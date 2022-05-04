//
// Created by Aldo Manco Jr on 03/05/22.
//

#ifndef MINISAT_SOLVER_H
#define MINISAT_SOLVER_H

#include "minisat/mtl/Vec.h"
#include "minisat/mtl/Heap.h"
#include "minisat/mtl/Alg.h"
#include "minisat/mtl/IntTypes.h"
#include "minisat/utils/Options.h"
#include "minisat/core/SolverTypes.h"
#include<iostream>

#include "SolverLegacy.h"

namespace Minisat {

    class Solver : public Legacy::Solver {
    public:
        using Legacy::Solver::Solver;

        bool solve(const Minisat::vec<Minisat::Lit> &assumps);
        lbool solveLimited(const vec<Lit>& assumps);
    };

}

#endif //MINISAT_SOLVER_H
