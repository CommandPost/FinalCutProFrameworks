//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFOrganizerFilterHUDUtils : NSObject
{
}

+ (id)filtersDictionaryWithFilters:(id)arg1 matchAny:(BOOL)arg2;
+ (id)defaultFiltersWithFavoriteFilterType:(int)arg1 textComparisonType:(int)arg2 searchText:(id)arg3;
+ (id)filterWithFavoriteFilterType:(int)arg1;
+ (id)generateAnalysisKeywordsDictActive:(BOOL)arg1 comparisonType:(int)arg2 selectedKeywords:(id)arg3;
+ (id)generateKeywordsDictActive:(BOOL)arg1 comparisonType:(int)arg2 keywords:(id)arg3 selectedKeywords:(id)arg4;
+ (id)generateFavoriteDictActive:(BOOL)arg1 favoriteFilterType:(int)arg2 hideClose:(BOOL)arg3;
+ (id)generateFormatInfoDictActive:(BOOL)arg1 formatInfo:(id)arg2 comparisonType:(int)arg3 searchText:(id)arg4;
+ (id)generateTextDictActive:(BOOL)arg1 comparisonType:(int)arg2 searchText:(id)arg3 hideClose:(BOOL)arg4;
+ (id)generateMediaTypeDictActive:(BOOL)arg1 comparisonType:(int)arg2 mediaType:(int)arg3;
+ (id)generateStabilizationDictActive:(BOOL)arg1 show:(BOOL)arg2;
+ (id)generateTimeDictActive:(BOOL)arg1 dateMetadataKey:(id)arg2 comparisonType:(int)arg3 timeString:(id)arg4 date:(id)arg5 timeUints:(int)arg6;
+ (id)generateRoleDictActive:(BOOL)arg1 comparisonType:(int)arg2 roleSets:(id)arg3 selectedRoles:(id)arg4;
+ (BOOL)shouldProcessFilter:(id)arg1;
+ (id)filterRange:(id)arg1 withFilterDict:(id)arg2;
+ (id)_performFavoriteFilter:(id)arg1 onRange:(id)arg2;
+ (id)_performFormatInfoFilter:(id)arg1 onRange:(id)arg2;
+ (id)_performKeywordsFilter:(id)arg1 onRange:(id)arg2;
+ (id)_performMediaTypeFilter:(id)arg1 onRange:(id)arg2;
+ (id)_performTextFilter:(id)arg1 onRange:(id)arg2;
+ (id)_performStabilizationFilter:(id)arg1 onRange:(id)arg2;
+ (id)_performTimeFilter:(id)arg1 onRange:(id)arg2;
+ (id)_performRoleFilter:(id)arg1 onRange:(id)arg2;
+ (id)_roundedDateFromDate:(id)arg1 early:(BOOL)arg2;
+ (id)_rangesFromRangeArray:(id)arg1 thatContainKeyword:(id)arg2 forMakerType:(id)arg3;
+ (BOOL)_string:(id)arg1 comparesWithString:(id)arg2 comparisonType:(int)arg3;
+ (id)_metadataStringForKey:(id)arg1 fromObject:(id)arg2;
+ (double)_durationForTimeString:(id)arg1 timeUnits:(int)arg2;
+ (id)formatInfoStringForIndex:(unsigned long long)arg1;
+ (id)formatInfoMetadataKeyForIndex:(unsigned long long)arg1;
+ (unsigned long long)indexForFormatInfoMetadataKey:(id)arg1;
+ (id)analysisKeywords;

@end

