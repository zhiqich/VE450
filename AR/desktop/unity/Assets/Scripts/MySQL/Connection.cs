using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MySql.Data.MySqlClient;

public class Connection : MonoBehaviour
{
    public static MySqlConnection mySqlConnection;
    static string host = "35.225.65.175";
    static string user = "zhiqich";
    static string pwd = "Demian1973";
    static string db = "450";

    public static void Open()
    {
        try
        {
            string connectionString = string.Format("Host={0};Uid={1};Pwd={2};Database={3};", host, user, pwd, db);
            mySqlConnection = new MySqlConnection(connectionString);
            mySqlConnection.Open();
            Debug.Log("Connected");
        }
        catch (MySqlException ex)
        {
            Debug.Log(ex.Message);
        }
    }

    public static void Close()
    {
        if (mySqlConnection != null)
        {
            mySqlConnection.Close();
            mySqlConnection.Dispose();
            mySqlConnection = null;
            Debug.Log("Disconnected");
        }
    }

    private void Awake()
    {
        Open();
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
