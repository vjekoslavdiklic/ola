/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * RealGlobalNetworkGetter.cpp
 * Copyright (C) 2013 Peter Newman
 */

#if HAVE_CONFIG_H
#  include <config.h>
#endif

#include <string>
#include <vector>

#include "ola/Logging.h"
#include "ola/network/NetworkUtils.h"
#include "ola/rdm/RealGlobalNetworkGetter.h"

namespace ola {
namespace rdm {

using ola::network::Interface;
using ola::network::InterfacePicker;
using ola::network::IPV4Address;
using std::string;
using std::vector;

const InterfacePicker *RealGlobalNetworkGetter::GetInterfacePicker() const {
  OLA_INFO << "Getting picker";
  return InterfacePicker::NewPicker();
}


bool RealGlobalNetworkGetter::GetDHCPStatus(const Interface &iface) const {
  // TODO(Peter): Fixme - actually do the work!
  if (iface.index > 0) {}
  return false;
}


IPV4Address RealGlobalNetworkGetter::GetIPV4DefaultRoute() {
  return IPV4Address();
}


string RealGlobalNetworkGetter::GetHostname() {
  return ola::network::Hostname();
}


string RealGlobalNetworkGetter::GetDomainName() {
  return ola::network::DomainName();
}


bool RealGlobalNetworkGetter::GetNameServers(
    vector<IPV4Address> *name_servers) {
  return ola::network::NameServers(name_servers);
}
}  // namespace rdm
}  // namespace ola
