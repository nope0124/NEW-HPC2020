﻿//------------------------------------------------------------------------------
/// @file
/// @author   ハル研究所プログラミングコンテスト実行委員会
///
/// @copyright  (C)HAL Laboratory, Inc.
/// @attention  このファイルの利用は、同梱のREADMEにある
///             利用条件に従ってください。
//------------------------------------------------------------------------------

#pragma once

//------------------------------------------------------------------------------
#include "Types.hpp"

//------------------------------------------------------------------------------
namespace hpc {

/// 乱数シード。
class RandomSeed
{
public:
    /// @name 生成
    //@{
    /// デフォルトの乱数シードを生成する。
    /// @note 生成される乱数シードは固定です。
    static RandomSeed DefaultSeed();
    //@}

    /// @name コンストラクタ
    //@{
    RandomSeed(uint aX, uint aY, uint aZ, uint aW);
    //@}

    /// @name メンバ変数
    //@{
    uint x;
    uint y;
    uint z;
    uint w;
    //@}
};

} // namespace
// EOF
