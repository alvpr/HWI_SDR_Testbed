/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(constellation_decoder_sic.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(777f859d594b62abb323abf41452e3e3)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <demonstrator/constellation_decoder_sic.h>
// pydoc.h is automatically generated in the build directory
#include <constellation_decoder_sic_pydoc.h>

void bind_constellation_decoder_sic(py::module& m)
{

    using constellation_decoder_sic    = ::gr::demonstrator::constellation_decoder_sic;


    py::class_<constellation_decoder_sic, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<constellation_decoder_sic>>(m, "constellation_decoder_sic", D(constellation_decoder_sic))

        .def(py::init(&constellation_decoder_sic::make),
           py::arg("constellation"),
           py::arg("n_user"),
           py::arg("power_allocation_factors"),
           D(constellation_decoder_sic,make)
        )
        



        ;




}








