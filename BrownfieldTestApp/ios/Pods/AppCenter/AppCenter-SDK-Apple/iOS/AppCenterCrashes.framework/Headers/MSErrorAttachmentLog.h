// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#import <Foundation/Foundation.h>

#import "MSAbstractLog.h"

/**
 * Error attachment log.
 */
@interface MSErrorAttachmentLog : MSAbstractLog

/**
 * Content type (text/plain for text).
 */
@property(nonatomic, copy) NSString *contentType;

/**
 * File name.
 */
@property(nonatomic, copy) NSString *filename;

/**
 * The attachment data.
 */
@property(nonatomic, copy) NSData *data;

/**
 * Initialize an attachment with a given filename and `NSData` object.
 *
 * @param filename The filename the attachment should get. If nil will get an automatically generated filename.
 * @param data The attachment data as `NSData`.
 * @param contentType The content type of your data as MIME type.
 *
 * @return An instance of `MSErrorAttachmentLog`.
 */
- (instancetype)initWithFilename:(NSString *)filename
                attachmentBinary:(NSData *)data
                     contentType:(NSString *)contentType;

/**
 * Initialize an attachment with a given filename and text.
 *
 * @param filename The filename the attachment should get. If nil will get an automatically generated filename.
 * @param text The attachment text.
 *
 * @return An instance of `MSErrorAttachmentLog`.
 */
- (instancetype)initWithFilename:(NSString *)filename attachmentText:(NSString *)text;

@end
