import java.net.*; 
import java.io.*; 

public class URLConnection1{ 
	public static void main(String[] args)
	{
		try
		{
			URL url = new URL("http://localhost"); 
			
			
			URLConnection urlCon = url.openConnection(); 
			
			
			BufferedReader in = new BufferedReader(
				new InputStreamReader(urlCon.getInputStream())); 
			String inputLine; 
			while ((inputLine = in.readLine()) != null) 			      
				System.out.println(inputLine); 
			in.close(); 
			
		} 
		catch (Exception e)
		{
			e.printStackTrace();
		}
		
	} 
} 
