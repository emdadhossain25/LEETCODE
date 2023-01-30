public class Array101{
    public static void main(String[] args) {
        DVD[] dvdCollection =  new DVD[15];

        DVD avengersDVD = new DVD("The Avengers",
        2012,"Joss Whedon");

        DVD incrediblesDVD = new DVD("The Incredibles", 2004,"Brad Bird");
        DVD findingDoryDVD = new DVD("Finding Dory", 2016,"Andrew Stanton");
        DVD lionKingDVD = new DVD("The Lion King", 2019,"Jon Favreau");
        DVD starWarsDvd = new DVD("Star Wars", 1977, "Goerge Lucas");
        dvdCollection[7]=avengersDVD;
        dvdCollection[3]=incrediblesDVD;
        dvdCollection[9]=findingDoryDVD;
        dvdCollection[2]=lionKingDVD;
        dvdCollection[3]=starWarsDvd;

        System.out.println(dvdCollection[7]);
        System.out.println(dvdCollection[10]);
        System.out.println(dvdCollection[3]);
    }
}