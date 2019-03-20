//
//  NSDate+nt_addition.h
//  VPNTest
//
//  Created by Ganjiuhui on 2019/3/20.
//  Copyright © 2019年 nice2meet. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (nt_addition)

@property (nonatomic, readonly) NSInteger nt_year; ///< Year component
@property (nonatomic, readonly) NSInteger nt_month; ///< Month component (1~12)
@property (nonatomic, readonly) NSInteger nt_day; ///< Day component (1~31)
@property (nonatomic, readonly) NSInteger nt_hour; ///< Hour component (0~23)
@property (nonatomic, readonly) NSInteger nt_minute; ///< Minute component (0~59)
@property (nonatomic, readonly) NSInteger nt_second; ///< Second component (0~59)
@property (nonatomic, readonly) NSInteger nt_nanosecond; ///< Nanosecond component
@property (nonatomic, readonly) NSInteger nt_weekday; ///< Weekday component (1~7, first day is based on user setting)
@property (nonatomic, readonly) NSInteger nt_weekdayOrdinal; ///< WeekdayOrdinal component
@property (nonatomic, readonly) NSInteger nt_weekOfMonth; ///< WeekOfMonth component (1~5)
@property (nonatomic, readonly) NSInteger nt_weekOfYear; ///< WeekOfYear component (1~53)
@property (nonatomic, readonly) NSInteger nt_yearForWeekOfYear; ///< YearForWeekOfYear component
@property (nonatomic, readonly) NSInteger nt_quarter; ///< Quarter component
@property (nonatomic, readonly) BOOL nt_isLeapMonth; ///< Weather the month is leap month
@property (nonatomic, readonly) BOOL nt_isLeapYear; ///< Weather the year is leap year
@property (nonatomic, readonly) BOOL nt_isToday; ///< Weather date is today (based on current locale)
@property (nonatomic, readonly) BOOL nt_isYesterday; ///< Weather date is yesterday (based on current locale)


#pragma mark - Date modify
    ///=============================================================================
    /// @name Date modify
    ///=============================================================================

/**
 Returns a date representing the receiver date shifted later by the provided number of years.
 
 @param years  Number of years to add.
 @return Date modified by the number of desired years.
 */
- (nullable NSDate *)nt_dateByAddingYears:(NSInteger)years;

/**
 Returns a date representing the receiver date shifted later by the provided number of months.
 
 @param months  Number of months to add.
 @return Date modified by the number of desired months.
 */
- (nullable NSDate *)nt_dateByAddingMonths:(NSInteger)months;

/**
 Returns a date representing the receiver date shifted later by the provided number of weeks.
 
 @param weeks  Number of weeks to add.
 @return Date modified by the number of desired weeks.
 */
- (nullable NSDate *)nt_dateByAddingWeeks:(NSInteger)weeks;

/**
 Returns a date representing the receiver date shifted later by the provided number of days.
 
 @param days  Number of days to add.
 @return Date modified by the number of desired days.
 */
- (nullable NSDate *)nt_dateByAddingDays:(NSInteger)days;

/**
 Returns a date representing the receiver date shifted later by the provided number of hours.
 
 @param hours  Number of hours to add.
 @return Date modified by the number of desired hours.
 */
- (nullable NSDate *)nt_dateByAddingHours:(NSInteger)hours;

/**
 Returns a date representing the receiver date shifted later by the provided number of minutes.
 
 @param minutes  Number of minutes to add.
 @return Date modified by the number of desired minutes.
 */
- (nullable NSDate *)nt_dateByAddingMinutes:(NSInteger)minutes;

/**
 Returns a date representing the receiver date shifted later by the provided number of seconds.
 
 @param seconds  Number of seconds to add.
 @return Date modified by the number of desired seconds.
 */
- (nullable NSDate *)nt_dateByAddingSeconds:(NSInteger)seconds;


#pragma mark - Date Format
    ///=============================================================================
    /// @name Date Format
    ///=============================================================================

/**
 Returns a formatted string representing this date.
 see http://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns
 for format description.
 
 @param format   String representing the desired date format.
 e.g. @"yyyy-MM-dd HH:mm:ss"
 
 @return NSString representing the formatted date string.
 */
- (nullable NSString *)nt_stringWithFormat:(NSString *)format;

/**
 Returns a formatted string representing this date.
 see http://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns
 for format description.
 
 @param format    String representing the desired date format.
 e.g. @"yyyy-MM-dd HH:mm:ss"
 
 @param timeZone  Desired time zone.
 
 @param locale    Desired locale.
 
 @return NSString representing the formatted date string.
 */
- (nullable NSString *)nt_stringWithFormat:(NSString *)format
                               timeZone:(nullable NSTimeZone *)timeZone
                                 locale:(nullable NSLocale *)locale;

/**
 Returns a string representing this date in ISO8601 format.
 e.g. "2010-07-09T16:13:30+12:00"
 
 @return NSString representing the formatted date string in ISO8601.
 */
- (nullable NSString *)nt_stringWithISOFormat;

/**
 Returns a date parsed from given string interpreted using the format.
 
 @param dateString The string to parse.
 @param format     The string's date format.
 
 @return A date representation of string interpreted using the format.
 If can not parse the string, returns nil.
 */
+ (nullable NSDate *)nt_dateWithString:(NSString *)dateString format:(NSString *)format;

/**
 Returns a date parsed from given string interpreted using the format.
 
 @param dateString The string to parse.
 @param format     The string's date format.
 @param timeZone   The time zone, can be nil.
 @param locale     The locale, can be nil.
 
 @return A date representation of string interpreted using the format.
 If can not parse the string, returns nil.
 */
+ (nullable NSDate *)nt_dateWithString:(NSString *)dateString
                             format:(NSString *)format
                           timeZone:(nullable NSTimeZone *)timeZone
                             locale:(nullable NSLocale *)locale;

/**
 Returns a date parsed from given string interpreted using the ISO8601 format.
 
 @param dateString The date string in ISO8601 format. e.g. "2010-07-09T16:13:30+12:00"
 
 @return A date representation of string interpreted using the format.
 If can not parse the string, returns nil.
 */
+ (nullable NSDate *)nt_dateWithISOFormatString:(NSString *)dateString;

@end

NS_ASSUME_NONNULL_END
