﻿// ReSharper disable RedundantUsingDirective
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
// Main Behavior Program

public class StartupBehavior : IExecuteOnceBehavior
{
    public void Execute(IBehaviorExecutionContext context)
    {
        // STARTUP_BLOCK
        var var_4495aec6_ed6c_d2bb_ba3e_9cf75bf3b819 = new List<Task>();
        Action var_8651350f_2d81_66e5_9ae9_0b2153fca023 = delegate
        {
            var var_008c6942_22a0_4ae5_b1d0_d53910fa2db9 = new BehaviorInfo { BehaviorName = "crouch" };

            BehaviorModuleHelper.Execute(context, var_008c6942_22a0_4ae5_b1d0_d53910fa2db9);

        };
        Action var_d48566be_44a0_8f8a_93d0_0f19a13e10c7 = delegate
        {
            var var_2e9c831d_fce9_03c0_b5dc_dc835539b67d = new BehaviorInfo { BehaviorName = "stand" };

            BehaviorModuleHelper.Execute(context, var_2e9c831d_fce9_03c0_b5dc_dc835539b67d);

        };
        var_4495aec6_ed6c_d2bb_ba3e_9cf75bf3b819.Add(Task.Factory.StartNew(() => var_8651350f_2d81_66e5_9ae9_0b2153fca023));
        var_4495aec6_ed6c_d2bb_ba3e_9cf75bf3b819.Add(Task.Factory.StartNew(() => var_d48566be_44a0_8f8a_93d0_0f19a13e10c7));
        Task.WaitAll(var_4495aec6_ed6c_d2bb_ba3e_9cf75bf3b819.ToArray());
    }
}