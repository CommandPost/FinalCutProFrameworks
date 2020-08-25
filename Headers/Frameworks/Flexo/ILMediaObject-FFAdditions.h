//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ILMediaObject.h"

#import "FFImageBrowserRepresentedItem.h"
#import "FFModelLocking.h"

@class NSString;

@interface ILMediaObject (FFAdditions) <FFModelLocking, FFImageBrowserRepresentedItem>
- (id)ff_imagePath;
- (id)ff_thumbnailPath;
- (id)ff_originalPath;
- (id)ff_places;
- (id)ff_faceTiles;
- (id)ff_faces;
- (struct CLLocationCoordinate2D)ff_location;
- (id)ff_fileName;
- (id)ff_URL;
- (id)ff_path;
- (id)ff_displayNameAndTryToLocalize:(BOOL)arg1;
- (id)ff_displayName;
- (id)ff_name;
- (id)ff_modificationDate;
- (id)ff_mediaTypeTag;
- (unsigned long long)ff_mediaType;
- (id)ff_mediaSourceIdentifier;
- (id)ff_keywords;
- (id)ff_identifier;
- (double)ff_duration;
- (id)ff_displayDate;
- (id)ff_contentType;
- (id)ff_comments;
- (id)modelLockingObject;
- (BOOL)canBeRetimed;
- (BOOL)canBeEnhanced;
- (BOOL)isEvent;
- (id)ffImageBrowserSubtitle;
- (id)ffImageBrowserTitle;
- (struct CGImage *)ffImageBrowserRepresentation;
- (id)ffImageBrowserUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

