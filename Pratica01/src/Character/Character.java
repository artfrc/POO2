package Character;
import Attack;
import Jump;
import Run;

public abstract class Character {

	private Attack attack;
	private Jump jump;
	private Run run;

	public Attack getAttack() {
		return attack;
	}
	
	public void setAttack(Attack attack) {
		this.attack = attack;
	}
	
	public void attack() {
		attack.attack();
	}
	
	public Jump getJump() {
		return jump;
	}
	
	public void setJump(Jump jump) {
		this.jump = jump;
	}
	
	public void jump() {
		jump.jump();
	}
	
	public Run getRun() {
		return run;
	}
	
	public void setRun(Run run) {
		this.run = run;
	}
	
	public void run() {
		run.run();
	}
	
}
