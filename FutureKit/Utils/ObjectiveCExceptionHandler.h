//
//  NSData-Ext.swift
//  FutureKit
//
//  Created by Michael Gray on 4/21/15.
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

@interface ObjectiveCExceptionHandler : NSObject


// soo.. Swift has no Try Catch logic.
// BUT - UIKit throws em.  and sometimes we need to catcth them.
// written in ObjectiveC but it's expecto that we use it in Swift

+ (void)Try:(void(^)(void))tryBlock catchException:(void(^)(NSException *exception))exceptionBlock finally:(void(^)(void))finallyBlock;
+ (void)Try:(void(^)(void))tryBlock catchException:(void(^)(NSException *exception))exceptionBlock;
+ (void)Try:(void(^)(void))tryBlock finally:(void(^)(void))finallyBlock;


@end
