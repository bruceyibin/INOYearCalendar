//
// Copyright 2014 Inostudio Solutions
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

@interface NSDate (INOHelpers)

@property (nonatomic, readonly) NSCalendar *calendar;

- (NSDate *)clippedDateWithCalendarUnits:(NSCalendarUnit)calendarUnit;

- (NSDate *)dateByAddingValue:(NSUInteger)value forDateKey:(NSString *)key;

- (NSUInteger)daysInMonth;

- (NSUInteger)dayOfWeek;

- (NSDate *)beginningOfDay;
- (NSDate *)endOfDay;

- (NSDate *)beginningOfMonth;
- (NSDate *)endOfMonth;

- (NSDate *)beginningOfYear;
- (NSDate *)endOfYear;

@end
