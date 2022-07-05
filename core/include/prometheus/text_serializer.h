#pragma once

#include <iosfwd>
#include <vector>

#include "prometheus/detail/core_export.h"
#include "prometheus/metric_family.h"

namespace prometheus {

class PROMETHEUS_CPP_CORE_EXPORT TextSerializer {
 public:
  std::string Serialize(const MetricFamily*, int size) const;
  void Serialize(std::ostream& out,
                 const MetricFamily* metrics, int size) const;
};

}  // namespace prometheus
