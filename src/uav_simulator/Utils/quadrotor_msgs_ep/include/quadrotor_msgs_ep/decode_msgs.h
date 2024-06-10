#ifndef __quadrotor_msgs_ep_quadrotor_msgs_ep_H__
#define __quadrotor_msgs_ep_quadrotor_msgs_ep_H__

#include <stdint.h>
#include <vector>
#include <quadrotor_msgs_ep/OutputData.h>
#include <quadrotor_msgs_ep/StatusData.h>
#include <quadrotor_msgs_ep/PPROutputData.h>

namespace quadrotor_msgs_ep
{

    bool decodeOutputData(const std::vector<uint8_t> &data,
                          quadrotor_msgs_ep::OutputData &output);

    bool decodeStatusData(const std::vector<uint8_t> &data,
                          quadrotor_msgs_ep::StatusData &status);

    bool decodePPROutputData(const std::vector<uint8_t> &data,
                             quadrotor_msgs_ep::PPROutputData &output);
}

#endif
