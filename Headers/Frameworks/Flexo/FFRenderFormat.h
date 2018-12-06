//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FFRenderFormat : NSObject
{
    NSString *_name;
    NSString *_displayName;
    NSArray *_renderProps;
    BOOL _renderFromOriginalMedia;
}

+ (void)releaseSharedInstance;
+ (id)allFormats;
+ (id)formatsForRender;
+ (id)formatsForExportCompatibleWith:(id)arg1;
+ (id)formatForName:(id)arg1;
+ (id)formatForCodecType:(unsigned int)arg1;
- (id)initWithName:(id)arg1 displayName:(id)arg2 renderFromOriginalMedia:(BOOL)arg3 renderProps:(id)arg4;
- (void)dealloc;
- (id)name;
- (id)displayName;
- (id)renderProps;
- (BOOL)renderFromOriginalMedia;
- (id)description;
- (id)renderPropsForVideoProps:(id)arg1;

@end

