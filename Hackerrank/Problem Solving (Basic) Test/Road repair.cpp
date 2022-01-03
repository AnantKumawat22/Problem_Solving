long min = 0;
sort(crew_id.begin(), crew_id.end());
sort(job_id.begin(), job_id.end());
for (int i = 0; i < crew_id.size(); i++)
{
    min += abs(crew_id[i] - job_id[i]);
}
return min;