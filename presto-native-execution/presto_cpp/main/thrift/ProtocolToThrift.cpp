// DO NOT EDIT : This file is generated by presto_protocol-to-thrift-json.py
/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// This file is generated DO NOT EDIT @generated
// This file is generated DO NOT EDIT @generated

#include "presto_cpp/main/thrift/ProtocolToThrift.h"

namespace facebook::presto {

// These could be covered by a more general template but this way only
// conversions to supported Thrift data types can be generated.
void toThrift(const std::string& proto, std::string& thrift) {
  thrift = proto;
}
void toThrift(const bool& proto, bool& thrift) {
  thrift = proto;
}
void toThrift(const int32_t& proto, int32_t& thrift) {
  thrift = proto;
}
void toThrift(const int64_t& proto, int64_t& thrift) {
  thrift = proto;
}
void toThrift(const double& proto, double& thrift) {
  thrift = proto;
}

template <typename P, typename T>
void toThrift(const std::shared_ptr<P>& proto, std::shared_ptr<T>& thrift) {
  if (proto) {
    thrift = std::make_shared<T>();
    toThrift(*proto, *thrift);
  }
}

template <typename V, typename S>
void toThrift(const std::vector<V>& v, std::set<S>& s) {
  S toItem;
  for (const auto& fromItem : v) {
    toThrift(fromItem, toItem);
    s.insert(toItem);
  }
}

template <typename P, typename T>
void toThrift(const std::vector<P>& p, std::vector<T>& t) {
  T toItem;
  for (const auto& fromItem : p) {
    toThrift(fromItem, toItem);
    t.push_back(toItem);
  }
}

void toThrift(const protocol::TaskState& proto, thrift::TaskState& thrift) {
  thrift = (thrift::TaskState)((int)proto);
}
void toThrift(const protocol::ErrorCause& proto, thrift::ErrorCause& thrift) {
  thrift = (thrift::ErrorCause)((int)proto);
}
void toThrift(const protocol::ErrorType& proto, thrift::ErrorType& thrift) {
  thrift = (thrift::ErrorType)((int)proto);
}
void toThrift(const protocol::Lifespan& proto, thrift::Lifespan& thrift) {
  toThrift(proto.isgroup, *thrift.grouped_ref());
  toThrift(proto.groupid, *thrift.groupId_ref());
}
void toThrift(
    const protocol::ErrorLocation& proto,
    thrift::ErrorLocation& thrift) {
  toThrift(proto.lineNumber, *thrift.lineNumber_ref());
  toThrift(proto.columnNumber, *thrift.columnNumber_ref());
}
void toThrift(const protocol::HostAddress& proto, thrift::HostAddress& thrift) {
  std::vector<std::string> parts;
  folly::split(":", proto, parts);
  if (parts.size() == 2) {
    thrift.host_ref() = parts[0];
    thrift.port_ref() = std::stoi(parts[1]);
  }
}
void toThrift(const protocol::TaskStatus& proto, thrift::TaskStatus& thrift) {
  toThrift(
      proto.taskInstanceIdLeastSignificantBits,
      *thrift.taskInstanceIdLeastSignificantBits_ref());
  toThrift(
      proto.taskInstanceIdMostSignificantBits,
      *thrift.taskInstanceIdMostSignificantBits_ref());
  toThrift(proto.version, *thrift.version_ref());
  toThrift(proto.state, *thrift.state_ref());
  toThrift(proto.self, *thrift.taskName_ref());
  toThrift(proto.completedDriverGroups, *thrift.completedDriverGroups_ref());
  toThrift(proto.failures, *thrift.failures_ref());
  toThrift(
      proto.queuedPartitionedDrivers, *thrift.queuedPartitionedDrivers_ref());
  toThrift(
      proto.runningPartitionedDrivers, *thrift.runningPartitionedDrivers_ref());
  toThrift(
      proto.outputBufferUtilization, *thrift.outputBufferUtilization_ref());
  toThrift(
      proto.outputBufferOverutilized, *thrift.outputBufferOverutilized_ref());
  toThrift(
      proto.physicalWrittenDataSizeInBytes,
      *thrift.physicalWrittenDataSizeInBytes_ref());
  toThrift(
      proto.memoryReservationInBytes, *thrift.memoryReservationInBytes_ref());
  toThrift(
      proto.systemMemoryReservationInBytes,
      *thrift.systemMemoryReservationInBytes_ref());
  toThrift(proto.fullGcCount, *thrift.fullGcCount_ref());
  toThrift(proto.fullGcTimeInMillis, *thrift.fullGcTimeInMillis_ref());
  toThrift(
      proto.peakNodeTotalMemoryReservationInBytes,
      *thrift.peakNodeTotalMemoryReservationInBytes_ref());
}
void toThrift(const protocol::ErrorCode& proto, thrift::ErrorCode& thrift) {
  toThrift(proto.code, *thrift.code_ref());
  toThrift(proto.name, *thrift.name_ref());
  toThrift(proto.type, *thrift.type_ref());
  toThrift(proto.retriable, *thrift.retriable_ref());
}
void toThrift(
    const protocol::ExecutionFailureInfo& proto,
    thrift::ExecutionFailureInfo& thrift) {
  toThrift(proto.type, *thrift.type_ref());
  toThrift(proto.message, *thrift.message_ref());
  toThrift(proto.cause, thrift.cause_ref());
  toThrift(proto.suppressed, *thrift.suppressed_ref());
  toThrift(proto.stack, *thrift.stack_ref());
  toThrift(proto.errorLocation, *thrift.errorLocation_ref());
  toThrift(proto.errorCode, *thrift.errorCode_ref());
  toThrift(proto.remoteHost, *thrift.remoteHost_ref());
  toThrift(proto.errorCause, *thrift.errorCause_ref());
}

} // namespace facebook::presto
