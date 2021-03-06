// Copyright 2018 Aman Mehara
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <unordered_set>
#include <vector>

bool contains_duplicate(const std::vector<int>& numbers) {
    std::unordered_set<int> unique_numbers;
    for (const auto& number : numbers) {
        if (unique_numbers.count(number)) {
            return true;
        } else {
            unique_numbers.insert(number);
        }
    }
    return false;
}