3.times do
  sample :drum_heavy_kick , pan: 1
  sleep 0.3
  sample :drum_heavy_kick , pan: 1
  sleep 0.3
  sample :drum_bass_hard , pan: 1 , amp: 3
  sleep 0.5
  
  
  sample :drum_heavy_kick , pan: -1
  sleep 0.3
  sample :drum_heavy_kick , pan: -1
  sleep 0.3
  sample :drum_bass_hard , pan: -1 , amp: 2
  sleep 0.5
end


sample :drum_cymbal_open,attack_level: 0.2
sleep 0.5



sample :loop_breakbeat
sleep sample_duration :loop_breakbeat


in_thread do
  sample :drum_cymbal_open
  sleep 1.5
end


3.times do
  sample :elec_bell
  sleep 0.5
  sample :elec_blip
  sleep 0.5
  sample :elec_bell
  sleep 0.5
  sample :elec_blip2
  sleep 0.5
end


use_synth :piano
3.times do
  play chord(:D5,:major )
  sleep 0.25
  play chord(:D5,:major)
  sleep 0.25
  play chord(:D5,:major )
  sleep 0.5
  play chord(:D5,:major )
  sleep 0.5
  play chord(:E5,:major )
  sleep 0.5
  play chord(:E4,:major )
  sleep 0.5
  play chord(:E3,:major )
  sleep 0.25
  play chord(:E2,:major )
  sleep 0.25
end


8.times do
  play chord( :G,:major)
  sleep 0.25
end

8.times do
  play chord( :A,:major)
  sleep 0.25
end

8.times do
  play chord( :Bb,:major)
  sleep 0.25
end


sample :drum_cymbal_open
sleep sample_duration :drum_cymbal_open


sample :loop_amen , rate: 0.7
sleep sample_duration :loop_amen , rate: 0.7


sample :loop_electric
sleep sample_duration :loop_electric


sample :loop_compus
sleep sample_duration :loop_compus


sample :loop_electric , amp: 1
sleep sample_duration :loop_electric



3.times do
  sample :elec_ping
  sleep 0.2
  sample :elec_twip
  sleep 0.2
  sample :elec_twip
  sleep 0.2
  
  sample :elec_ping
  sleep 0.2
  sample :elec_twip
  sleep 0.2
  
  sample :elec_ping
  sleep 0.2
  sample :elec_ping
  sleep 0.2
  
  sample :elec_twip
  sleep 0.2
  
  sample :elec_ping
  sleep 0.2
  sample :elec_twip
  sleep 0.2
  sample :elec_twip
  sleep 0.2
  sample :elec_twip
  sleep 0.2
  
  sample :elec_ping
  sleep 0.2
  sample :elec_ping
  sleep 0.2
  sample :elec_twip
  sleep 0.4
end


in_thread do
  use_synth :piano
  loop do
    play_pattern_timed chord(:Db5, :minor),0.25,amp: 0.25, release: 0.4
  end
end
3.times do
  use_synth :piano
  play chord(:D4,:major )
  sleep 0.25
  play chord(:D4,:major)
  sleep 0.5
  play chord(:D4,:major )
  sleep 0.25
  play chord(:D4,:major )
  sleep 0.25
  play chord(:E3,:major )
  sleep 0.25
  play chord(:E3,:major )
  sleep 0.25
  play chord(:E3,:major )
  sleep 0.25
  play chord(:E3,:major )
  sleep 0.25
end


live_loop:drum_random do
  sample :drum_heavy_kick
  sleep 0.5
  sample choose([:drum_tom_mid_soft, :drum_tom_lo_soft, :drum_tom_hi_soft ]) ,amp: 0.8
  sleep 0.5
  sample choose([:drum_tom_mid_hard,:drum_tom_lo_hard, :drum_tom_hi_hard ]) ,amp: 0.8
  sleep 0.5
  sample choose([:drum_splash_hard, :drum_splash_soft, :drum_cymbal_soft, :drum_cymbal_hard, :drum_cymbal_open, :drum_cymbal_closed, :drum_cymbal_pedal]) ,amp: 0.8
  sleep 0.25
end


