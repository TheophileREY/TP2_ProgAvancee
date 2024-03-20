public class FormePhysique {
    private int f0;
    private int f1;
    private int f2;

    public FormePhysique() {
    }

    public void setF0(int f0) {
        this.f0 = f0;
    }

    public void setF1(int f1) {
        this.f1 = f1;
    }

    public void setF2(int f2) {
        this.f2 = f2;
    }

    public String calculerCondition() {
        double resultat = 0.1 * (f0 + f1 + f2 - 200);
        if (resultat <= 0) {
            return "Excellente";
        } else if (resultat > 0 && resultat < 5) {
            return "Très bonne";
        } else if (resultat >= 5 && resultat < 10) {
            return "Bonne";
        } else if (resultat >= 10 && resultat < 15) {
            return "Moyenne";
        } else {
            return "Faible";
        }
    }

    @Override
    public String toString() {
        return "Condition Physique: " + calculerCondition();
    }
}
