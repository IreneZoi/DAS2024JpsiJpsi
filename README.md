This exercise is based on the code and analysis developed by Kai Yi, Liangliang Chen (NNU), Shiyi Huang (NNU), Bolin Li (NNU), Xining Wang (NNU), Kai Yi (NNU) and Yilin Zhou (NNU).

At the beginning of this short exercise an introduction will be done based on [these slides](https://twiki.cern.ch/twiki/pub/CMS/SWGuideCMSDataAnalysisSchoolLPC2024LongExercisejpsijpsi-pre/CMSDAS_2024.pdf). 

Additional Material can be found here:
- [Analysis Note AN v15](http://cms.cern.ch/iCMS/jsp/openfile.jsp?tp=draft&files=AN2021_135_v15.pdf) (CMS access only)
- [Paper v72](http://cms.cern.ch/iCMS/analysisadmin/get?analysis=BPH-21-003-paper-v72.pdf)
- [Pre-Approval Talk](https://indico.cern.ch/event/1099352/contributions/4625872/attachments/2356065/4020712/preapprovalNov-30-2021.pdf) (CMS access only)


This exercise is described in [this Twiki](https://akgrummer.github.io/long-ex-jpsi-jpsi/) and divided in two steps, the event selection and the fitting part. The code for the two different parts is in two separate directories.

Setup:
```
ssh -Y USERNAME@cmslpc-sl7.fnal.gov
cd ~/nobackup/
mkdir CMSDAS2024
cd CMSDAS2024
git clone https://github.com/IreneZoi/DAS2024JpsiJpsi.git
source /cvmfs/cms.cern.ch/cmsset_default.sh
cmsrel CMSSW_10_2_5
cmsrel CMSSW_11_1_1
```

For the event selection part:
```
cd ~/nobackup/CMSDAS2024JpsiJpsi/CMSSW_10_2_5/src
cmsenv
cd ../../eventselection/
root -l
root [0] .L myntuple.C++
root [1] .x runJobs_0.C
root [2] .q

root -l myhbk.root
root [1] .ls
root [2] myFourMuonmass->Draw()
```

For the fit part:
```
cd ~/nobackup/CMSDAS2024JpsiJpsi/CMSSW_11_1_1/src/
cmsenv
cd ../../fitpackage/
source makeLibSo.sh
root -l nointerf_nofd.C
```


