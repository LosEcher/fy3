inherit NPC;
string find_goods();
string find_xxy();
string tell_ip();
void create()
{
  set_name("������",({"gong"}));
  set_skill("unarmed",10);
  set("inquiry",([
  "goods":(:find_goods:),
  "xxy":(:find_xxy:),
  "ip":(:tell_ip:),
  ]));
  setup();
}
string find_goods()
{
 object obj;
 string name,name2;
 obj=find_object("/daemon/class/gaibang/obj/dagoubang.c");
 if (obj)  {
  name=obj->query("name");
  name2=file_name(obj);
  return "��Ҫ�ҵ���"+name+"��?���ļ���"+name2;
  }
return "not found";
}
string find_xxy()
{
  object *obj;
  string name;
  int i;
  obj=users();
  if (obj)  {
  for (i=0;i<sizeof(obj);i++) {
       if (obj[i]->query("id")=="yxx")
       name=obj[i]->query("name");
    }
    return "the name is "+name;
 }
 return "not found";
 }
string tell_ip()
{
  object ob;
  string ip,host;
  ob=find_player("xxy");
  if (ob)  { 
    ip=query_ip_number(ob);
    host=ob->query_host_name();
    return "the ip is "+ip+",host_name is "+host;
}
return "not found";
}