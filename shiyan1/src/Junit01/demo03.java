package Junit01;

public class demo03 {


    public enum demo05 {
        LOCKS_ERROR_NUM("lock的取值不在有效范围1~70内"),
        STOCKS_ERROR_NUM("stock的取值不在有效范围1~80内"),
        BARRELS_ERROR_NUM("barrel的取值不在有效范围1~90内");

        private final String text;

        demo05(final String text){
            this.text = text;
        }

        @Override
        public String toString() {
            return this.text;
        }
    }

}
