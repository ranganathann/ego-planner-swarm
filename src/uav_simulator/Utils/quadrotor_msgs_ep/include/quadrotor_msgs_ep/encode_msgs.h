#ifndef __quadrotor_msgs_ep_quadrotor_msgs_ep_H__
#define __quadrotor_msgs_ep_quadrotor_msgs_ep_H__

#include <stdint.h>
#include <vector>
#include <quadrotor_msgs_ep/SO3Command.h>
#include <quadrotor_msgs_ep/TRPYCommand.h>
#include <quadrotor_msgs_ep/Gains.h>

namespace quadrotor_msgs_ep
{

    void encodeSO3Command(const quadrotor_msgs_ep::SO3Command &so3_command,
                          std::vector<uint8_t> &output);
    void encodeTRPYCommand(const quadrotor_msgs_ep::TRPYCommand &trpy_command,
                           std::vector<uint8_t> &output);

    void encodePPRGains(const quadrotor_msgs_ep::Gains &gains,
                        std::vector<uint8_t> &output);
}

#endif
