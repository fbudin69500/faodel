// Copyright 2018 National Technology & Engineering Solutions of Sandia, 
// LLC (NTESS). Under the terms of Contract DE-NA0003525 with NTESS,  
// the U.S. Government retains certain rights in this software. 

/**
 * @file nnti_buffer.cpp
 *
 * @brief nnti_buffer.cpp
 *
 * @author Todd Kordenbrock (thkorde\@sandia.gov).
 * Created on: Oct 02, 2015
 */


#include "nnti/nnti_pch.hpp"

#include "nnti/nntiConfig.h"

#include <atomic>

#include "nnti/nnti_buffer.hpp"


std::atomic<uint32_t> nnti::datatype::nnti_buffer::next_id_ = {1};
const uint64_t nnti::datatype::nnti_buffer::packed_size_;
