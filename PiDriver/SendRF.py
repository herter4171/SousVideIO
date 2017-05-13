from BashOps import BashOps
import ConstValues

class SendRF(BashOps):
    execName = 'codesend'
    pulseLen = 232

    def __init__(self):
        super(SendRF, self).__init__(ConstValues.rfPath)

    def sendCode(self, code):
        print self.runWorkDirCmd(SendRF.execName, [code, '-l', SendRF.pulseLen])


