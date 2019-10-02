//
//  FFmpegController.h
//  iina
//
//  Created by lhc on 9/6/2017.
//  Copyright © 2017 lhc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface FFThumbnail: NSObject

@property(nonatomic) NSImage * _Nullable image;
@property(nonatomic) NSTimeInterval realTime;

@end


@protocol FFmpegControllerDelegate <NSObject>

/**
 A notification being sent
 */
- (void)didUpdateThumbnails:(nullable NSArray<FFThumbnail *> *)thumbnails forFile:(nonnull NSString *)filename withProgress:(NSInteger)progress;

/** 
 Did generated thumbnails for the video.
 */
- (void)didGenerateThumbnails:(nonnull NSArray<FFThumbnail *> *)thumbnails forFile:(nonnull NSString *)filename succeeded:(BOOL)succeeded;

@end


@interface FFmpegController: NSObject

@property(nonatomic, weak) id<FFmpegControllerDelegate> _Nullable delegate;

@property(nonatomic) NSInteger thumbnailCount;

- (void)generateThumbnailForFile:(nonnull NSString *)file;

+ (NSTimeInterval)probeVideoDurationForFile:(nonnull NSString *)file;

@end
