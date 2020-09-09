#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "index_extension.h"
#include "ontology_extension.h"
#include "patient2vec_extension.h"
#include "timeline_extension.h"

PYBIND11_MODULE(extension, m) {
    register_timeline_extension(m);
    register_index_extension(m);
    register_ontology_extension(m);
    register_patient2vec_extension(m);
}