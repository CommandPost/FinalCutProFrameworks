//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GeoKitWrapper : NSObject
{
}

+ (id)nearestMapLocationToLongitude:(float)arg1 latitude:(float)arg2;
+ (id)mapLocationFromGeoCity:(id)arg1;
+ (id)mapLocationsWhoseNameStartsWith:(id)arg1;
+ (id)allMapLocations;
+ (BOOL)loadGeoKit;

@end
