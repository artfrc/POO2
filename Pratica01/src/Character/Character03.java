package Character;
import AttackStrong;
import JumpLow;
import RunFast;

public class Character03 extends Character{

	public Character03() {

		setJump(new JumpLow());
		setRun(new RunFast());
		setAttack(new AttackStrong());
		
	}
	
}
