//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/TMDocument.h>

@class TMTheme;

@interface TMTemplate : TMDocument
{
    TMTheme *_theme;
}

- (void)dealloc;
- (id)theme;
- (BOOL)belongsToTheme:(id)arg1;
- (id)path;
- (id)resolvedPath;
- (id)title;
- (id)previewPath;
- (id)modifiedDate;
- (id)attributes;
- (id)description;

@end
