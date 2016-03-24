/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

/**
 *
 * @author SONY
 */

import java.sql.*;

public class JDBCEx2 {
    public static void main(String args[])
    {
        try
        {
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
            Connection con = DriverManager.getConnection("jdbc:sqlserver://localhost:1433;databaseName=Student;user=sa;password=password");
            if(con!=null) 
            {
                System.out.println("Connection Successful!");
                Statement st = con.createStatement();
                
                String strSQL = "select * from Student";
                ResultSet rs = st.executeQuery(strSQL);
                while (rs.next())
                {
                    
                    int studentID = rs.getInt(1);
                    String studentName = rs.getString("StudentName");
                    System.out.println("StudentID : " + studentID + " - Name : " + studentName);
                }
                
                /*
                String strSQL = "insert into Student values(300, N'Nguyễn Cư Trinh','1975-06-18','')";
                st.executeUpdate(strSQL);
                * 
                */
                /*
                String strSQL = "insert into Student values(?,?,?,?)";
                //............
                PreparedStatement ps = con.prepareCall(strSQL);
                //................
                ps.setInt(1, 400);
                ps.setString(2, "Lê Hồng Phong");
                ps.setString(3, "1990-02-02");
                ps.setString(4, "N/A");
                ps.execute();
                //..............
                ps.setInt(1, 500);
                ps.setString(2, "Nguyễn Chí Thanh");
                ps.setString(3, "1990-02-02");
                ps.setString(4, "N/A");
                ps.execute();
                */
                /*
                CallableStatement cs = con.prepareCall("{call sp_UpdateStudentName(?,?)}");
                cs.setInt(1, 300);
                cs.setString(2, "Hoàng Văn Thụ");
                cs.execute();
                */ 
                
                /*
                CallableStatement cs = con.prepareCall("{call sp_GetMaxStudentID(?)}");
                cs.registerOutParameter(1, Types.INTEGER);
                cs.execute();
                int maxid = cs.getInt(1);
                System.out.println("Current Max ID: " + maxid);
                */ 
                con.close();
            }
            
        }
        catch (Exception ex)
        {
            System.out.println("Error : " + ex.getMessage());
        }
    }
}
